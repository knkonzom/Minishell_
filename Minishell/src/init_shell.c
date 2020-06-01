#include "../includes/minishell.h"

// Initializing the shell during startup.
void    init_shell()
{
    clear();
    // ---------------------------------------------------------
    ft_putstr("\n\n\n\n******************""************************");
    ft_putstr("\n\n\n\t****Minishell****"); 
    ft_putstr("\n\n\t-USE AT YOUR OWN RISK-"); 
    ft_putstr("\n\n\n\n*******************""***********************"); 
    // ---------------------------------------------------------
    char    *username = getenv("USER");
    // ---------------------------------------------------------
    while (*username)
    {
        ft_putchar(*username++);
    }
    clear();
}