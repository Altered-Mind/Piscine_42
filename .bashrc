# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    .bashrc                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/24 by jcalais                    #+#    #+#              #
#    Updated: 2026/01/24 17:12:05 by Altered          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ============================================================================ #
#                              CONFIGURATION DE BASE                           #
# ============================================================================ #

# Variables pour le header 42 (utilisées par stdheader.vim)
export USER=$(whoami)
export GROUP=$(id -gn)
export MAIL="joan.calais@learner.42.tech"

# Désactiver le son de bip (bell)
set bell-style none
bind 'set bell-style none'

# Historique des commandes
HISTSIZE=10000
HISTFILESIZE=20000
HISTCONTROL=ignoredups:erasedups
shopt -s histappend

# Options de shell utiles
shopt -s checkwinsize
shopt -s cdspell

# ============================================================================ #
#                                   COULEURS                                   #
# ============================================================================ #

# Codes de couleurs ANSI
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
MAGENTA='\033[0;35m'
CYAN='\033[0;36m'
BOLD='\033[1m'
RESET='\033[0m'

# Couleurs pour ls
export CLICOLOR=1
export LSCOLORS=GxFxCxDxBxegedabagaced

if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
fi

# ============================================================================ #
#                                    PROMPT                                    #
# ============================================================================ #

PS1="\[${BOLD}\]\[${CYAN}\][\u@\h]\[${RESET}\] \[${GREEN}\]\w\[${RESET}\]\n\[${MAGENTA}\]➜\[${RESET}\] "

# ============================================================================ #
#                                    ALIAS                                     #
# ============================================================================ #

# Navigation
alias ..='cd ..'
alias ...='cd ../..'
alias ....='cd ../../..'

# ls avec couleurs
alias ll='ls -lh'
alias la='ls -lAh'
alias l='ls -CF'

# Sécurité
alias rm='rm -i'
alias cp='cp -i'
alias mv='mv -i'

# Git
alias gs='git status'
alias ga='git add'
alias gc='git commit -m'
alias gp='git push'
alias gl='git log --oneline --graph --decorate'

# Compilation
alias ccw='cc -Wall -Wextra -Werror'
alias norm='norminette'

# Utilitaires
alias c='clear'
alias h='history'

# ============================================================================ #
#                              FONCTIONS UTILES                                #
# ============================================================================ #

# Fonction pour créer un Makefile automatiquement
mk42() {
    local name=${1:-"program"}
    local sources=${2:-"*.c"}
    
    cat > Makefile << EOF
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: $USER <$MAIL>                              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: $(date +%Y/%m/%d) by $USER               #+#    #+#              #
#    Updated: $(date +%Y/%m/%d) by $USER              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= $name

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= $sources

OBJS	= \$(SRCS:.c=.o)

all: \$(NAME)

\$(NAME): \$(OBJS)
	\$(CC) \$(CFLAGS) \$(OBJS) -o \$(NAME)

%.o: %.c
	\$(CC) \$(CFLAGS) -c \$< -o \$@

clean:
	rm -f \$(OBJS)

fclean: clean
	rm -f \$(NAME)

re: fclean all

.PHONY: all clean fclean re
EOF
    
    echo -e "${GREEN}✓ Makefile créé avec succès !${RESET}"
}

# Afficher l'aide
42help() {
    echo -e "${BOLD}${CYAN}=== Commandes pour 42 ===${RESET}"
    echo ""
    echo -e "${GREEN}mk42 [nom] [sources]${RESET}"
    echo -e "  Crée un Makefile avec header 42"
    echo -e "  Exemple: ${YELLOW}mk42 libft 'ft_*.c'${RESET}"
    echo ""
    echo -e "${BOLD}${CYAN}=== Alias utiles ===${RESET}"
    echo -e "${GREEN}ccw${RESET}     - cc -Wall -Wextra -Werror"
    echo -e "${GREEN}norm${RESET}    - norminette"
    echo -e "${GREEN}gs${RESET}      - git status"
    echo -e "${GREEN}ga${RESET}      - git add"
    echo -e "${GREEN}gc${RESET}      - git commit -m"
    echo -e "${GREEN}gp${RESET}      - git push"
    echo -e "${GREEN}ll${RESET}      - ls -lh"
    echo -e "${GREEN}la${RESET}      - ls -lAh"
    echo ""
}

# ============================================================================ #
#                                MESSAGE D'ACCUEIL                             #
# ============================================================================ #
echo ""
echo -e "${GREEN}Tapez '42help' pour voir les commandes disponibles${RESET}"
echo ""
