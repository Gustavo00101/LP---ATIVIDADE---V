#include <stdio.h>

void limpatela()
{
    system("cls || clear");
}

struct dados_cadastro
{
    char nome[200];
    char cpf[200];
    char nascimento[200];
    char telefone[200]
};

int main()
{

    int opcao;
    int i;
    char alugado[100][200];
    char comprado[100][200];

    struct dados_cadastro cadastro;

    printf("Informe o seu nome: ");
    gets(cadastro.nome);
    printf("Informe o seu CPF: ");
    gets(cadastro.cpf);
    printf("Informe a sua data de nascimento: ");
    gets(cadastro.nascimento);
    printf("Informe o numero do seu telefone: ");
    gets(cadastro.telefone);

    limpatela();

    do
    {

        printf("==========================");
        printf("\t \nBIBLIOTECA SALVADOR\n");
        printf("==========================");
        printf("\n1) ALUGAR LIVRO");
        printf("\n2)COMPRAR UM LIVRO");
        printf("\n3)REGRAS");
        printf("\n4) SAIR E MOSTRAR RESULTADO");
        printf("\n===========================\n");
        printf(" ESCOLHA UMA OPCAO:");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            
            
                printf("\n===========================\n");
                printf(" \t \n LIVROS DISPONIVEIS \n");
                printf("\n============================");
                printf("\n1º pequeno principe ");
                printf("\n2º Dom Quixote ");
                printf("\n3º O Meu Pé de Laranja Lima");
                printf("\n4º O velho e o menino");
                printf("\n5º O Alienista");
                printf("\n6º Crime e castigo");
                printf("\n7º Noites brancas");
                printf("\n8º Helena");
                printf("\n9º Dom Casmurro");
                printf("\n10º O sol é para todos");
                printf("\n================================");
                printf(" \nVALOR DO ALUGUEL R$ 5,00\n");
                fflush(stdin);
                printf("DIGITE O NOME DO LIVRO DESEJADO: ");
                gets(alugado);

                printf("\nLivro desejado para o aluguel: %s", alugado);
            
            break;
        case 2:
            printf("\n===========================\n");
            printf(" \t \n LIVROS DISPONIVEIS \n");
            printf("\n============================");
            printf("\n1º pequeno principe ");
            printf("\n2º Dom Quixote ");
            printf("\n3º O Meu Pé de Laranja Lima");
            printf("\n4º O velho e o menino");
            printf("\n5º O Alienista");
            printf("\n6º Crime e castigo");
            printf("\n7º Noites brancas");
            printf("\n8º Helena");
            printf("\n9º Dom Casmurro");
            printf("\n10º O sol é para todos");
            printf("\n================================");
            printf("\n VALOR DA COMPRA DO LIVRO R$50\n");
            fflush(stdin);
            printf("Livro desejado: ");
            gets(comprado);

            break;
        case 3:
            limpatela();
            printf("\n===========================\n");
            printf(" \t \n REGRAS \n");
            printf("\n=======================================================================================");
            printf("\n1º NAO GUARDE OS LIVROS ACONDICIONADOS EM SACOS PLASTICOS OU ENCAPADOS EM PAPEL PARDO.");
            printf("\n2º NAO RISQUE O LIVRO");
            printf("\n3º O PRAZO DE ENTREGA DO ALUGUEL É DE 15 DIAS UTEIS");
            printf("\n=========================================================================================");
        case 4:

            break;

        default:
            break;
        }
    } while (opcao != 4);
    limpatela();
    printf("\nMOSTRANDO RESULTADO CADASTRO\n");
    printf("\nNome do cadastrado: %s \n", cadastro.nome);
    printf("CPF: %s \n", cadastro.cpf);
    printf("Nascimento: %s \n", cadastro.nascimento);
    printf("Telefone: %s \n", cadastro.telefone);
        printf("\n MOSTRANDO RESULTADO COMPRA\n");
   
    
        printf("\nValor fixo R$ 5,00");
        printf("\nLivro alugado: %s\n", alugado);
        printf("\n Valor fixo R$50,00");
        printf("\nLivro comprado: %s\n", comprado);
    
    return 0;
}
