#include "../includes/minishell.h"

// Help command function
void    open_help()
{
    ft_putstr("\n----------------------------------------------------"
        "\n\tWelcome to Shell Help"
        "\n\tUse shell at your own risk..."
        "\n\tList of supported commands:"
        "\n\t\t>cd"
        "\n\t\t>ls"
        "\n\t\t>exit"
        "\n\t\t>General commands available in UNIX shell"
        "\n-----------------------------------------------------");
    return;
}