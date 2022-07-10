# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    install.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macourio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 07:55:12 by macourio          #+#    #+#              #
#    Updated: 2022/07/10 09:10:30 by macourio         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

FILE="$HOME/.zshrc"
if [[ -f "$FILE" ]]
then
	echo "\n\n#everything under this line concerns the loupe\n" >> ~/.zshrc
	echo "PATH=\$PATH:\$HOME/loupe/loupe.sh" >> ~/.zshrc
	echo "alias loupe=\"\$HOME/loupe/loupe.sh\"" >> ~/.zshrc
	echo "\n\n" >> ~/.zshrc
else
	echo "#everything under this line concerns the loupe" >> ~/.bashrc
	echo "PATH=\$PATH:\$HOME/loupe/loupe.sh" >> ~/.bashrc
	echo "alias loupe=\"\$HOME/loupe/loupe.sh\"" >> ~/.bashrc
	echo "\n\n" >> ~/.bashrc
fi
export PATH=$PATH:$HOME/loupe/loupe.sh
echo "Installation complete !!"
