PS1="%F{8}%n@%m:%f %F{red}%~%f > "
if (command -v brew && brew list --formula | grep -c vim ) > /dev/null 2>&1; then
    alias vim="$(brew --prefix vim)/bin/vim"
fi
export PATH=/opt/homebrew/bin:$PATH
export PATH=/bin:$PATH
export PATH="/usr/bin:/bin:/usr/sbin:/sbin:$PATH"
export PATH=$PATH:/Users/hariz/.spicetify
alias python=/opt/homebrew/bin/python3.10
