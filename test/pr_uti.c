#include "main.h"
/* ------- UTILITIES ------ */

/**
 * itos - Converts int to string
 * @num: number to convert to string
 *
 * Return: pointer to number string
 */
char *itos(int num)
{
	int digits, num_cp = num, rem, next_d;
	char *n_str;

	/*count digits*/
	while (num_cp > 0)
	{
	num_cp /= 10;
	digits++;
	}

	n_str = malloc((digits + 1) * sizeof(char));

	for (rem = num; rem != 0; rem /= 10)
	{
		next_d = rem % 10;
		n_str[1] = (next_d + '0');
	}


	return (rev_str(n_str));
}
/**
 * rev_str - reverses string (null char at the end)
 * @str: string to be reversed
 * Return: pointer to reversed string
 */
char *rev_str(char *str)
{
	int i, j = 0;
	char *dest;

	while (str[j] != '\0')
	{
		j++;
	}

	dest = malloc(j * sizeof(char));
	if (dest == NULL)
		return (NULL);

	j--;

	for (i = 0; str[i] != '\0'; i++, j--)
	{
		dest[i] = str[j];
	}
	dest[i] = '\0';
	return (dest);
}
[?1049h[22;0;0t[>4;2m[?1h=[?2004h[1;63r[?12h[?12l[22;2t[22;1t[27m[23m[29m[m[H[2J[?25l[63;1H"_pwr.c" 13L, 125C[1;1H[35m#include [m[31m"main.h"[m

[32mint[m _pwr([32mint[m a, [32mint[m b)
{
    [32mint[m n;
    [32mint[m x = a;[8;5H[33mfor[m (n = [31m1[m; n < b ; n++)
    {[10;9Hx = x * a;
    }
    [33mreturn[m (x);
}
[1m[34m~                                                                                                                    [15;1H~                                                                                                                    [16;1H~                                                                                                                    [17;1H~                                                                                                                    [18;1H~                                                                                                                    [19;1H~                                                                                                                    [20;1H~                                                                                                                    [21;1H~                                                                                                                    [22;1H~                                                                                                                    [23;1H~                                                                                                                    [24;1H~                                                                                                                    [25;1H~                                                                                                                    [26;1H~                                                                                                                    [27;1H~                                                                                                                    [28;1H~                                                                                                                    [29;1H~                                                                                                                    [30;1H~                                                                                                                    [31;1H~                                                                                                                    [32;1H~                                                                                                                    [33;1H~                                                                                                                    [34;1H~                                                                                                                    [35;1H~                                                                                                                    [36;1H~                                                                                                                    [37;1H~                                                                                                                    [38;1H~                                                                                                                    [39;1H~                                                                                                                    [40;1H~                                                                                                                    [41;1H~                                                                                                                    [42;1H~                                                                                                                    [43;1H~                                                                                                                    [44;1H~                                                                                                                    [45;1H~                                                                                                                    [46;1H~                                                                                                                    [47;1H~                                                                                                                    [48;1H~                                                                                                                    [49;1H~                                                                                                                    [50;1H~                                                                                                                    [51;1H~                                                                                                                    [52;1H~                                                                                                                    [53;1H~                                                                                                                    [54;1H~                                                                                                                    [55;1H~                                                                                                                    [56;1H~                                                                                                                    [57;1H~                                                                                                                    [58;1H~                                                                                                                    [59;1H~                                                                                                                    [60;1H~                                                                                                                    [61;1H~                                                                                                                    [62;1H~                                                                                                                    [m[63;100H8,11-14[7CAll[8;14H[?25h[?25l[63;90Hv[8;14H[63;90H1[8;14H[63;1H[1m-- VISUAL --[m[63;13H[K[63;90H1[8;14H[63;100H8,11-14[7CAll[8;14H[?25h[?25l[63;90Hi[8;14H[?25h[?25l[63;91H<20>[8;14H[63;90H1    [8;14H[?25h[?25l[63;90Ha[8;14H[?25h[?25l[63;91Hs[8;14H[63;90H6 [13;1H[4;1H[46m{[m[8;1H[7m    [m[7m[33mfor[m[7m (n = [m[7m[31m1[m[7m; n < b ; n++) 
    { 
        x = x * a; 
    } 
    [m[7m[33mreturn[m[7m (x); [m
[46m}[m[63;90H[K[63;90H6[13;1H[63;100H13,1[10CAll[13;1H[?25h[?25l[63;90Hd[13;1H[63;1H5 fewer lines[63;90H[K[8;1H[4;1H{[8;1H[K[9;1H[1m[34m~                                                                                                                    [10;1H~                                                                                                                    [11;1H~                                                                                                                    [12;1H~                                                                                                                    [13;1H~                                                                                                                    [m[63;1H[K[63;100H8,0-1[9CAll5 fewer lines[63;100H[K[63;100H8,0-1[9CAll[8;1H[?25h[?25l[63;90Hf[8;1H[?25h[?25l[63;91Ha[8;1H[63;90H  [8;1H[?25h[?25l[63;90Hs[8;1H[63;90H [8;1H[63;90Hcl[8;1H[63;90H  [8;1H[63;1H[1m-- INSERT --[m[63;13H[K[63;100H8,1[11CAll[8;1H[?25h[?25ld[63;102H2[8;2H[?25h[?25lf[63;102H3[8;3H[?25h[?25la[63;102H4[8;4H[?25h[?25ls[63;102H5[8;5H[?25h[?25ldf[63;102H7[8;7H[?25h[?25la[63;102H8[8;8H[?25h[?25l[63;1H[K[63;100H8,7[11CAll[8;7H[?25h[?25l[63;1HType  :qa!  and press <Enter> to abandon all changes and exit Vim[63;100H[K[63;100H8,7[11CAll[8;7H[?25h[?25l[63;100H[K[63;100H8,7[11CAll[8;7H[?25h[?25l[63;100H[K[63;100H8,7[11CAll[8;7H[?25h[?25l[63;100H[K[63;100H8,7[11CAll[8;7H[?25h[?25l[63;90Ha[8;7H[63;90H [8;8H[63;1H[1m-- INSERT --[m[63;13H[K[63;100H8,8[11CAll[8;8H[?25h[?25ls[63;102H9[8;9H[?25h[?25ld[63;102H10[8;10H[?25h[?25lf[63;103H1[8;11H[?25h[?25ls[63;103H2[8;12H[?25h[?25la[63;103H3[8;13H[?25h[?25lf[63;103H4[8;14H[?25h[?25ld[63;103H5[8;15H[?25h[63;1H[K[8;14H[?25l[63;90H^[[8;14H[63;90H  [8;15H[63;100H8,14[10CAll[8;14H[?25h[?25l[63;90H^[[8;14H[63;90H  [8;14H[63;90H^[[8;14H[63;90H  [8;14H[?25h