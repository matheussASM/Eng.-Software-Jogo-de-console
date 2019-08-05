//Variaveis:
	char reset;
	int classe,idade;
	int escolha [7];
	int sorte,carisma,forca;
	int valorAleatorio,resu;
	char nome[13];
//---------
//-------------------Mecanica do jogo-----------------------
int skill (){
//Status voltado para sorte
        if (idade <=18){
            sorte = 8;
            forca = 5;
            carisma = 5;
        }
//Status voltado para força
        else if(idade >18 <40){
            sorte = 5;
            forca = 8;
            carisma = 5;
        }
//Status voltado para carisma
        else{
            sorte = 5;
            forca = 5;
            carisma = 8;
        }
        return sorte,forca,carisma;
}
int dadoforca(){
    valorAleatorio = rand() % 11;
    resu = valorAleatorio + forca;
    return resu;
}
int dadocarisma(){
    valorAleatorio = rand() % 11;
    resu = valorAleatorio + carisma;
    return resu;
}
int dadosorte(){
    valorAleatorio = rand() % 11;
    resu = valorAleatorio + sorte;
    return resu;
}
//--------ASCII-------------
void nomedopersonagem(){
    printf("\n");
    printf("\n");
	printf("    _____                                                       \n");
	printf("   /    /|_ ___________________________________________         \n");
	printf("  /    // /|                  /    /|                 /|        \n");
	printf(" (====|/ //                  /    //                 / |        \n");
	printf("  (=====|/                  (====|/                 / .|        \n");
	printf(" (====|/                                           / /||        \n");
	printf("/_________________________________________________/ / ||        \n");
	printf("|  _____________________________________________  ||  ||        \n");
	printf("| ||                                            | ||            \n");
	printf("| ||                                            | ||            \n");
	printf("| |                                             | |             \n");
	printf("\n\n");
	printf("Esse jogo e um jogo de escolhas, suas escolhas alteram o resultado        \n");
	printf("final do jogo,entao para comecar me diga seu nome:                        \n\n");
	printf("->");
		}
void escolhaidade(){
	printf("       dBBBBBBBBBBBBBBBBBBBBBBBBb                                  \n");
	printf("      BP YBBBBBBBBBBBBBBBBBBBBBBBb                                 \n");
	printf("      dB   YBb  A historia do  YBBBb                               \n");
    printf("       dB    YBB      mago      BBBBb                              \n");
	printf("        Yb    YBBBBBBBBBBBBBBBBBBBBBBBb                            \n");
	printf("         Yb    YBBBBBBBBBBBBBBBBBBBBBBBb                           \n");
	printf("          Yb    YBBBBBBBBBBBBBBBBBBBBBBBb                          \n");
	printf("           Yb    YBBBBBBBBBBBBBBBBBBBBBBBb                         \n");
	printf("            Yb    YBBBBBBBBBBBBBBBBBBBBBBBb                        \n");
	printf("             Yb  dBBBBBBBBBBBBBBBBBBBBBBBBb                        \n");
	printf("              Yb dP=======================/                        \n");
	printf("               YbB=======================(                         \n");
	printf("  	        Ybb=======================\\                           \n");
	printf("  	         Y888888888888888888DSI8888b                           \n");
    printf("%s para prosseguirmos com sua historia e importante avisar\n",nome);
    printf("que sua idade tambem e um fator importante nesse jogo  \n");
    printf("Se voce tiver abaixo de 18 anos possuira bastante sorte\n");
    printf("se estiver entre 18 e 40 anos possuira bastante forca  \n");
    printf("Se estiver acima dos 40 voce tera bastante carisma     \n");
    printf("Esses status sao importantes na hora da sua escolha    \n");
    printf("Sabendo disso escolha sua idade:                     \n\n");
    printf("->");
        }
void placa(){
    printf("               _.-''''''''''''''''''-._            \n");
    printf("            _.'                        |\\          \n");
    printf("          .'                         _.' |         \n");
    printf("          `._                         |:.'         \n");
    printf("            `._                     _.' |          \n");
    printf("               `..__                 |  |          \n");
    printf("                    `---.._.--.    _|  |           \n");
    printf("                     | _   - | `-.._|_.'           \n");
    printf("                     | _   - |                     \n");
    printf("                     | _   - |                     \n");
    printf("                     | _   - |                     \n");
    printf("                     | _   - |                     \n");
    printf("                     | _   - |                     \n");
    printf("Seu nome e %s e voce tem %d ? \n[s/n]\n ",nome,idade);
    printf("->");
}
void livroum (){
//Primeira Interação Mago:
     printf("      ___________________   ___________________     \n");
     printf("  .-/|  1    ~~**~~      \\ /      ~~**~~   2   |\\-. \n");
     printf("  ||||                    :                    |||| \n");
     printf("  ||||  Voce e um mago    :   Seguindo o Mapa  |||| \n");
     printf("  ||||   de uma terra     :   que trouxera de  |||| \n");
     printf("  ||||   distante onde    :   sua terra natal  |||| \n");
     printf("  ||||   as pessoas       :   ao chegar no     |||| \n");
     printf("  ||||   viviam em paz    :   local voce       |||| \n");
     printf("  ||||   ate o dia que    :   encontra um      |||| \n");
     printf("  ||||   voce decide      :   anciao...        |||| \n");
     printf("  ||||   buscar a         :                    |||| \n");
     printf("  ||||                    :                    |||| \n");
     printf("  |||| Varinha de merlim  :                    |||| \n");
     printf("  ||||___________________ : ___________________|||| \n");
     printf("  ||/====================\\:/====================\\|| \n");
     printf("  `---------------------~___~--------------------'' \n");
     printf("Escolha um movimento:\n 1-atacar 2-Conversar 3-Ignorar\n");
     printf("->");
}
void livroespada(){
                 printf("      ___________________   ___________________     \n");
                 printf("  .-/|  3    ~~**~~      \\ /      ~~**~~   4   |\\-. \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||  Voce derrota      :         / \\        |||| \n");
                 printf("  ||||   o pobre anciao   :         | |        |||| \n");
                 printf("  ||||   que aceita a     :         | |        |||| \n");
                 printf("  ||||   morte com        :         | |        |||| \n");
                 printf("  ||||   tristeza no      :         | |        |||| \n");
                 printf("  ||||   rosto            :     <--------->    |||| \n");
                 printf("  ||||                    :         | |        |||| \n");
                 printf("  ||||                    :         | |        |||| \n");
                 printf("  ||||                    :         \\0/        |||| \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||___________________ : ___________________|||| \n");
                 printf("  ||/====================\\:/====================\\|| \n");
                 printf("  `---------------------~___~--------------------'' \n");
}
void livroseta(){
                 printf("      ___________________   ___________________     \n");
                 printf("  .-/|  3    ~~**~~      \\ /      ~~**~~   4   |\\-. \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||  Voce conta sua    :                    |||| \n");
                 printf("  ||||  historia de vida  :                    |||| \n");
                 printf("  ||||  comovido ele te   :                    |||| \n");
                 printf("  ||||   deixa passar     :                    |||| \n");
                 printf("  ||||                    :       ------>      |||| \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||                    :                    |||| \n");
                 printf("  ||||___________________ : ___________________|||| \n");
                 printf("  ||/====================\\:/====================\\|| \n");
                 printf("  `---------------------~___~--------------------'' \n");
}
void loboescolha(){
        printf("                     .              \n");
        printf("                    / V\\           \n");
        printf("                  / `  /            \n");
        printf("                 <<   |             \n");
        printf("                 /    |             \n");
        printf("               /      |             \n");
        printf("             /        |             \n");
        printf("           /    \\  \\ /            \n");
        printf("          (      ) | |              \n");
        printf("  ________|   _/_  | |              \n");
        printf("<__________\\______)\\__)           \n");
    printf("Adentrando a masmorra voce avista a varinha de Merlin\n");
    printf("mas antes que se aproxime um lobo gigante salta em sua frente.\n");
}
void skull (){
                    printf("              .';cllllc:'.                         \n");
                    printf("           .cxKWMMMMMMMMWKxc.                      \n");
                    printf("         .lKWMMMMMMMMMMMMMMMKo.                    \n");
                    printf("        'OWMMMMMMMMMMMMMMMMMMW0,                   \n");
                    printf("       .OMMMMMMMMMMMMMMMMMMMMMM0'                  \n");
                    printf("       lWMMMMMMMMMMMMMMMMMMMMMMWo                  \n");
                    printf("      .xMMWOl::o0WMMMMW0o::lOWMMk.                 \n");
                    printf("       dMMk.    'OMMMMO'    .kMMd.                 \n");
                    printf("       ,KMk.    '0MMMM0'    .kMX;                  \n");
                    printf("       'OMW0occdKWMWWMMKdcco0WM0'                  \n");
                    printf("      .xWMMMMMMMMM0llOMMMMMMMMMWx.                 \n");
                    printf("       cXMMMMMMMMNd,,oNMMMMMMMMXc                  \n");
                    printf("        .:o0MMMMMMWWWWMMMMMMKo:.                   \n");
                    printf("           cNMMMMMMMMMMMMMMWl                      \n");
                    printf("           .o0OoxKkllxKxok0o.           		   \n");
                    printf("             .   .    .   .             		   \n");

}
void negado (){
                    printf(" MMMWX000KXWMMMMMMMMMMMMMMNKK00KNMMMM \n");
                    printf(" MMMNk,...'dNMMMMMMMMMMMWO;....oXMMMM \n");
                    printf(" MMMMWO,    :0WMMMMMMMMXo.   .xNMMMMM \n");
                    printf(" MMMMMMXo.   .dNMMMMWNO,    :0WMMMMMM \n");
                    printf(" MMMMMMMWO,    :0WMXo,.   .dNMMMMMMMM \n");
                    printf(" MMMMMMMMMXo.   .dk;     :0WMMMMMMMMM \n");
                    printf(" MMMMMMMMMMWO,         .dNMMMMMMMMMMM \n");
                    printf(" MMMMMMMMMMMMXc      .;0WMMMMMMMMMMMM \n");
                    printf(" MMMMMMMMMMMW0;      .:KWMMMMMMMMMMMM \n");
                    printf(" MMMMMMMMMMNd.         'xNMMMMMMMMMMM \n");
                    printf(" MMMMMMMMW0:    ;kx,    .cKMMMMMMMMMM \n");
                    printf(" MMMMMMMNx.   .oXMMKl'.   'xNMMMMMMMM \n");
                    printf(" MMMMMWK:    ,OWMMMMWXk'   .cKMMMMMMM \n");
                    printf(" MMMMNx.   .lXMMMMMMMMMKc.   'kWMMMMM \n");
                    printf(" MMWKc.   ,kWMMMMMMMMMMMNx'   .cKMMMM \n");
                    printf(" MMWOlllldXMMMMMMMMMMMMMMMKdllloOWMMM \n");
                    printf("Voce conta sua historia para o Anciao mas ele te ignora completamente.\n");
                      printf("Deseja retornar ao ultimo Check-point? [s/n]:\n");
                      printf("->");
}
void dormir (){
                        printf("             _____|~~\\_____      _____________              \n");
                        printf("         _-~               \\    |    \\                      \n");
                        printf("         _-    | )     \\    |__/   \\   \\                    \n");
                        printf("         _-         )   |   |  |     \\  \\                   \n");
                        printf("         _-    | )     /    |--|      |  |                  \n");
                        printf("        __-_______________ /__/_______|  |____________      \n");
                        printf("       (                |----         |  |					\n");
                        printf("        `---------------'--\\\\\\\\      .`--'                  \n");
                        printf("                                     `||||                  \n");
                    printf("Voce caminha em direcao a masmorra e percebe que o anciao esta dormindo, entao voce entra.\n");
}
void correndo(){
                        printf("	            _       \n");
                        printf("              _( }      \n");
                        printf("    -=   _  <<  \\       \n");
                        printf("        `.\\__/`/\\\\      \n");
                        printf("  -=      '--'\\\\  `     \n");
                        printf("              \\)        \n");
                    printf("Voce caminha em direcao a masmorra entao o anciao da um grito voce se assusta e sai correndo.\n");
                    printf("Deseja retornar ao ultimo Check-point? [s/n]:\n");
}
void varinha(){
                    printf("              .:.^.  *      \n");
                    printf("  *.    *   .::'.*.>        \n");
                    printf("    `:.    '':.  |          \n");
                    printf("      `:.  .::'  |  *       \n");
                    printf("  *     `:::'    |          \n");
                    printf("         `*'     |          \n");
                    printf("Com uma magia brutal, voce mata o lobo\n");
                    printf("e caminha ate a varinha de merlin mas \n");
                    printf("antes que voce a segure escuta um sussuro\n");
                    printf("''Somente quem for puro de coracao pode tocar''\n");
                    printf("Escolha um movimento:\n 1-Pegar 2-Ir embora\n");
                    printf("->");
}
void lobobravo(){
                printf("                        ,     ,       \n");
                printf("                        |\\---/|      \n");
                printf("                       /  , , |       \n");
                printf("                  __.-'|  / \\ /      \n");
                printf("         __ ___.-'        ._O|        \n");
                printf("      .-'  '        :      _/         \n");
                printf("     / ,    .        .     |          \n");
                printf("    :  ;    :        :   _/           \n");
                printf("    |  |   .'     __:   /             \n");
                printf("    |  :   /'----'| \\  |             \n");
                printf("    \\  |\\  |      | /| |            \n");
                printf("     '.'| /       || \\ |             \n");
                printf("     | /|.'       '.l \\_             \n");
                printf("     || ||             '-'            \n");
                printf("     '-''-'                           \n");
                printf("Voce tenta gritar com ele mas so o deixa mais furioso\n");
                printf("Escolha um movimento:\n 1-Atacar 2-Fugir\n");
}
//Final um
void finalum(){
                    printf("              _          \n");
                    printf("           .' .    '.       \n");
                    printf("          '_ '_\\/_'  `_       \n");
                    printf("          .  . \\\\  .  .       \n");
                    printf("         .==. ` \\\\' .'       \n");
                    printf("  .\\|   //bd\\\\   \\\\,       \n");
                    printf("  \\_'`._\\\\__//_.'`.;       \n");
                    printf("    `.__      __,' \\\\       \n");
                    printf("        |    |      \\\\       \n");
                    printf("        |    |       `       \n");
                    printf("        |    |                  \n");
                    printf("        |    |               \n");
                    printf("        |____|              \n");
                    printf("       =='  '==               \n");
                    printf("Voce segura a varinha de Merlin entao\n");
                    printf("enquanto o poder flui em suas maos aparece\n");
                    printf("o espirito do anciao que se revela Merlin\n");
                    printf("e o amaldicoa a ser um lobo gigante ate\n");
                    printf("que o proximo viajante de coracao impuro o mate.\n");
                    printf("VOCE ALCANCOU O PRIMEIRO FINAL\n");

}
//-------------------------------------------------------------------------------------
//Final dois
void finaldois(){
                    printf("                                        __            \n");
                    printf("                 ,-_                  (`  ).          \n");
                    printf("                 |-_'-,              (     ).         \n");
                    printf("                 |-_'-'           _(        '`.       \n");
                    printf("        _        |-_'/        .=(`(      .     )      \n");
                    printf("       /;-,_     |-_'        (     (.__.:-`-_.'       \n");
                    printf("      /-.-;,-,___|'          `(       ) )             \n");
                    printf("     /;-;-;-;_;_/|\\_ _ _ _ _   ` __.:'    )          \n");
                    printf("        x_( __`|_P_|`-;-;-;,|                         \n");
                    printf("        |\\ \\    _||   `-;-;-'                         \n");
                    printf("        | \\`   -_|.      '-'                         \n");
                    printf("        | /   /-_| `                                  \n");
                    printf("        |/   ,'-_|  \\                                \n");
                    printf("        /____|'-_|___\\                               \n");
                    printf(" _..,____]__|_\\-_'|_[___,._                          \n");
                    printf(" '                          ``'--,.,.                 \n");
                    printf("Antes que empunhe a Varinha de Merlin percebe ter     \n");
                    printf("tomado muitas decisoes ruins ao longo de sua jornada  \n");
                    printf("e decide partir em busca de redencao                  \n");
                    printf("VOCE ALCANCOU O SEGUNDO FINAL                         \n");
}
//-------------------------------------------------------------------------------------
//Final tres
void finaltres(){
                    printf("        /\\      							\n");
                    printf("       /  \\.--./\\      					\n");
                    printf("      /    \\  /  \\     					\n");
                    printf("     /      \\/    \\      					\n");
                    printf("    /     |\\_/|    \\              		\n");
                    printf("   /     / o o\\    \\      				\n");
                    printf("  /      /(   )\\    \\      				\n");
                    printf(" /       / \\0/ \\     \\          			\n");
                    printf("         |     |                 			\n");
                    printf("         | | | |                    		\n");
                    printf("       (~\\ | | /~)                  		\n");
                    printf("      __\\_|| ||_/__                 		\n");
                    printf(" ___///_//_| |_\\\\__\\\\\\__________       \n");
                    printf("Voce consegue correr e desviar do lobo entao\n");
                    printf("corre desesperado ate a varinha e quando finalmente\n");
                    printf("a pega em suas maos voce acaba sendo abocanhado pelo lobo\n");
                    printf("VOCE ALCANCOU O TERCEIRO FINAL\n");
}
//-------------------------------------------------------------------------------------
//Final quatro:
void finalquatro(){
                    printf("                        ,  \n");
                    printf("                       /|  \n");
                    printf("                      / |  \n");
                    printf("                     /.+|  \n");
                    printf("                    / *.|  \n");
                    printf("                    |:+.:\\  \n");
                    printf("                    /+.:*.\\  \n");
                    printf("                   |:.*.:+|  \n");
                    printf("                  /+.---.Z\\  \n");
                    printf("                ,(((/o^o\\))\\  \n");
                    printf("               (()))   > ()))  \n");
                    printf("               )(())(/~\\))))(  \n");
                    printf("              /((()'`))((()(\\)  \n");
                    printf("             /::)).&& (()))():\\  \n");
                    printf("            /:*::)'||.   /\\+:::\\  \n");
                    printf("           /:::::( || \\ / |:/:::)  \n");
                    printf("           \\:::+/-'L|, &  |::*:/  \n");
                    printf("            |::(|_  _'   _\\+::|  \n");
                    printf("            |*::\\ `-'   //,):/\\  \n");
                    printf("            |:::+| ||   <//:+::\\  \n");
                    printf("            \\:+::\\\\ //     |::::|  \n");
                    printf("            /.:.:| \\\\     /:.:.|  \n");
                    printf("           /*:.:.\\  \\\\   |:.:.+|  \n");
                    printf("           |..:..*\\ ||   |.*..:\\  \n");
                    printf("          /:...:..| ||   |..:..|_    \n");
                    printf("      ,--|.'.+...*| ||   /....\\:`-.  \n");
                    printf("   ,-:::.'.. ...*.\\ ||  / . .. .`..:`-.  \n");
                    printf("   `:::/.. *. .: .| \\.' ;* ;  .+ \\  :/  \n");
                    printf("     `/ +  ; :. +/_.-||-;_  |_.--._\\`'  \n");
                    printf("      `-._/  |_.'    |\\   `-'  \n");
                    printf("          `--'       |_\\  \n");
                printf("Apos sua Jornada voce finalmente alcanca\n");
                printf("a Lendaria Varinha de Merlin mas antes mesmo\n");
                printf("de que voce consiga a tocar aparece\n");
                printf("o Anciao da Entrada da Masmorra que se revela\n");
                printf("o Mago Merlin dizendo:''Saudacoes %s aguardei por anos",nome);
                printf("alguem com um bom coracao como o seu leve-a agora ela e sua''\n");
                printf("entao com a varinha em maos voce completa sua jornada\n");
                printf("VOCE ALCANCOU O QUARTO FINAL\n");
                }
//------------------------------------------------------
//Final cinco:
void finalcinco(){
                    printf("             ___          \n");
                    printf("         ,-""___""-.      \n");
                    printf("        .;""'| |`"":.     \n");
                    printf("        || | | | | ||     \n");
                    printf("        ||_|_|_|_|_||     \n");
                    printf("       //          /|     \n");
                    printf("      /__         //|     \n");
                    printf("  ,-""___""-.    //||     \n");
                    printf(" .;""'| |`"":.  //        \n");
                    printf(" ||/| | | | || //         \n");
                    printf(" ||_|_|_|_|_||//          \n");
                    printf(" ||_________||/           \n");
                    printf(" ||         ||            \n");
                    printf(" ''         ''            \n");
                    printf("Voce foge e consegue despistar\n");
                    printf("o lobo chegando ate a Varinha de Merlin\n");
                    printf("mas percebe estar repleto de medo entao decide\n");
                    printf("abandonar essa vida de perigos e aventuras e voltar\n");
                    printf("para seguranca da sua cama\n");
                    printf("VOCE ALCANCOU O QUINTO FINAL\n");
        }

//------------------------------------------------------
//APRESENTAÇÃO
void apresentacao(){

    printf("**************************************************************\n");
    printf("**************************************************************\n");
    printf("**                                                          **\n");
    printf("**                       PROBLEMA                           **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**            A falta de interesse das crianças             **\n");
    printf("**              e dos adolescentes na leitura.              **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**     Matheus Antonio S Moreira               ------>      **\n");
    printf("**     Engenharia de software                               **\n");
    printf("**                                                          **\n");
    printf("**************************************************************\n");
    printf("**************************************************************\n");
    system("pause");
    system("cls");
    printf("**************************************************************\n");
    printf("**************************************************************\n");
    printf("**                                                          **\n");
    printf("**                      SOLUCAO                             **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**    Meu jogo consiste em um RPG de escolha, onde suas     **\n");
    printf("**    decisoes definem o rumo da sua historia levando a     **\n");
    printf("**    cinco finais diferentes.                              **\n");
    printf("**                                                          **\n");
    printf("**    O jogo tambem apresenta um sistema de pontos de       **\n");
    printf("**    abilidades muito comuns em jogos do genero com o      **\n");
    printf("**    diferencial de serem customizados apartir da idade    **\n");
    printf("**    do seu personagem, essa ferramenta e mais detalhada   **\n");
    printf("**    na hora de escolher sua idade.                        **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**     Matheus Antonio S Moreira               ------>      **\n");
    printf("**     Engenharia de software                               **\n");
    printf("**                                                          **\n");
    printf("**************************************************************\n");
    printf("**************************************************************\n");
    system("pause");
    system("cls");
    printf("**************************************************************\n");
    printf("**************************************************************\n");
    printf("**                                                          **\n");
    printf("**                         OBJETIVO                         **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**            Como o jogo oferece diferentes finais         **\n");
    printf("**              o objetivo do projeto e engajar o           **\n");
    printf("**              jogador a tentar varios finais              **\n");
    printf("**              o incentivando a ler,e mostrando            **\n");
    printf("**              que a leitura pode ser divertida            **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**                                                          **\n");
    printf("**     Matheus Antonio S Moreira               ------>      **\n");
    printf("**     Engenharia de software                               **\n");
    printf("**                                                          **\n");
    printf("**************************************************************\n");
    printf("**************************************************************\n");
    system("pause");
    system("cls");
}
