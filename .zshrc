#PS1="%F{8//}%n@%m:%f %F{red}%~%f > " # For apple macbook
PS1="%F{8//}%n@%m:%f %F{red}%~%f > "
if (command -v brew && brew list --formula | grep -c vim ) > /dev/null 2>&1; then
    alias vim="$(brew --prefix vim)/bin/vim"
fi

# For apple macbook
#export PATH=/opt/homebrew/bin:$PATH
#export PATH=/bin:$PATH
#export PATH="/usr/bin:/bin:/usr/sbin:/sbin:$PATH"
#export PATH=$PATH:/Users/hariz/.spicetify
#alias python=/opt/homebrew/bin/python3.10

# enable color support of ls and also add handy aliases
  if [ -x /usr/bin/dircolors ]; then
      test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
      alias ls='ls --color=auto'
      alias dir='dir --color=auto'
      alias vdir='vdir --color=auto'
      alias grep='grep --color=auto'
      alias fgrep='fgrep --color=auto'
      alias egrep='egrep --color=auto'
  fi

# some more ls aliases
    alias ll='ls -alF'
    alias la='ls -A'
    alias l='ls -CF'
