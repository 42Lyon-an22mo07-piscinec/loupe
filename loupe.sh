# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    loupe.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macourio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 14:21:41 by macourio          #+#    #+#              #
#    Updated: 2022/07/10 09:13:34 by macourio         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
valid=1
daycode=$1
shift
if [ -z $daycode ]
then
	echo "Erreur aucun code specifie. pour C00 le code est C00"
	exit
fi

ext=""
for i in $@
do
	ext=`echo "$i"|sed "s/.*\././"`
	if [ ! $ext == '.c' ] 
	then
		valid=0
	fi
done

if [ $valid ==  1 ]
then
	norm=`norminette -R CheckForbiddenSourceHeader $@|sed '/OK!$/d'|wc -l|tr -d ' '`
	if [ $norm == '0' ]
	then
		echo "✅ Norminette passed !"
	else
		echo "⛔️ Norminette error !"
		norminette -R CheckForbiddenSourceHeader $@
		rm -r loupeEval
		exit
	fi
	mkdir loupeEval
	cd loupeEval
	cp -r ~/loupe/loupe_$daycode .
	count=0
	for i in $@
	do
		gcc -Wall -Wextra -Werror ../$i loupe_$daycode/main$count.c
		if [[ ! -f "a.out" ]]
		then
			echo "⛔️ Does not compile !"
			rm -r loupeEval
			exit
		fi
		./a.out > res
		check=`diff res loupe_$daycode/check$count`
		if [ -z $check ]
		then
			echo "✅ $i passed !"
		else
			echo "⛔️ $i failed !"
			echo "$check"
		fi
		count=`expr $count + 1`
	done
	cd ..
	rm -r loupeEval
else
	echo "⛔️ Presence de fichier non .c"
fi
