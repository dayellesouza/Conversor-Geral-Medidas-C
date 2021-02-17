/*Atividade pré-aula*/
// Progama que faça conversões de medidas em geral//
#include <stdio.h>
#include<locale.h>
#include<conio.h>

main(){						//INICIO FUNÇÃO MAIN//
	setlocale(LC_ALL, "Portuguese");	
	char cont,submenu;
	int menu, submenu2;
	float n1, n2, conversor;
	menu=0;

do{								//INICIO LAÇO DE REPETIÇÃO - MENU//
	printf("\n\nCONVERSOR\n\n");
	printf("\n1. Conversor de medidas");
	printf("\n2. Conversor de moedas");				/*Menu*/
	printf("\n3. Conversor de peso");
	printf("\n4. Sair do programa\n\n");
	scanf("%d", &menu);
	fflush(stdin);
	
		while((menu<1)||(menu>4)){ 
		    system("cls");                               //LAÇO DE REPETIÇÃO - VALIDAÇÃO DE MENU //
			printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n");
			printf("\t\t\tDigite uma opção válida:");
			scanf("%d",&menu);
			fflush(stdin);
		}
	
		switch(menu){					//INICIO SWITCH - MENU//
			
			menu=0;
			submenu2=0;
			
			case 1:
				do{						//INICIO LAÇO DE REPETIÇÃO - CASE1//
					system("cls");
					printf("\tA.Métricas \n\tB.Volumétricas\n \tC.Voltar ao Menu principal\n");
					scanf("%c",&submenu);
					fflush(stdin);
					
						while((submenu!='a')&&(submenu!='A')&&(submenu!='b')&&(submenu!='B')&&(submenu!='c')&&(submenu!='C'))			 //INICIO DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU//
							{     system("cls");                                             
								printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n");
								printf("\t\t\tDigite uma opção válida:");
								scanf("%c",&submenu);
								fflush(stdin);
						   }											 //FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU//
							
							switch(submenu){		 //INICIO SWITCH SUBMENU//
								case 'A':
								case 'a':
									submenu2=0;
									while(submenu2 != 3){				//INICIO LAÇO DE REPETIÇÃO - SUBMENU2//
										system("cls");
										puts("A. Métricas");
										printf(" 1. Metro para centímetro\n 2. Centímetro para metro\n 3. Voltar ao menu anterior\n");
										scanf("%d",&submenu2);
										fflush(stdin);
										
											while((submenu2<1)||(submenu2>3))		//INICIO DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2//		
											{	system("cls");
												printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}								//FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2//
						   					
						   				switch(submenu2){			//INICIO SWITCH SUBMENU2//
						   					do{					//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2//
						   						
						   						case 1:
													do{					//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
														system("cls");
														printf("\n*Metro para centimetro*\n");
														printf("Metro: ");
														scanf("%f", &n1);
														fflush(stdin);
														
														while(n1<= 0)			//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
														{
															printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
															scanf("%f", &n1);
															fflush(stdin);
														}							//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
														conversor=(n1*100);
														printf("Centimetros: %.1f", conversor);
														printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
														scanf("%s",&cont);
														fflush(stdin);
								
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))				//INICIO DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2/CASE1//
															{         	system("cls");                                          
																printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
																scanf("%c",&cont);
																fflush(stdin);
														   }                                                     //FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2/CASE1//
											        }while((cont!='S') && (cont!='s'));		//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
														printf("\n%c\n", cont);
			      										system("CLS");
			      										break;
			      										
	
												case 2:
													do{						//INICIO LAÇO DE REPETIÇÃO - CASE2//
														system("cls");
														printf("\n*Centímetro para metro*\n");
														printf("Centimetro: ");
														scanf("%f", &n1);
														fflush(stdin);
														while(n1<= 0)
														{
															printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
															scanf("%f", &n1);
															fflush(stdin);
														}
														conversor=(n1/100);
														printf("Metro: %.1f", conversor);
														printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
														scanf("%s",&cont);
														fflush(stdin);
								
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))				//INICIO DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2/CASE2//
															{       	system("cls");                                            
																printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
																scanf("%c",&cont);
																fflush(stdin);
														 	}                                            //FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2/CASE2//         
											        }while((cont!='S') && (cont!='s'));		//FIM DO LAÇO DE REPETIÇÃO - CASE2//
														printf("\n%c\n", cont);
			      										break;
			      
											}while((submenu2<1)||(submenu2>3));		//FIM LAÇO DE REPETIÇÃO - SUBMENU2//
										}										//FIM SWITCH//
									} 								//FIM LAÇO DE REPETIÇÃO OP - SUBMENU 2//
									break; break;
									
									case 'B':
									case 'b':
										do{				//INICIO LAÇO DE REPETIÇÃO - SUBMENU2//
											system("cls");
											puts("B. Volumétricas");
											printf(" 1. Litro para mililitro\n 2. Mililitro para litro\n 3. Voltar ao menu anterior\n");
											scanf("%d",&submenu2);
											fflush(stdin);
										
											while(submenu2<1 || submenu2>3)			//INICIO DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2//		
											{	system("cls");
												printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}									//FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2//		
						   					
						   						switch(submenu2){						//INICIO SWITCH SUBMENU2//
						   							do{										//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2//
						   								case 1:
						   									do{							//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
																	system("cls");
																printf("\n*Litro para mililitro*\n");
																printf("Litro: ");
																scanf("%f", &n1);
																fflush(stdin);
																
																while(n1<= 0)							//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n1);
																	fflush(stdin);
																}								//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																conversor=(n1*1000);
																printf("Mililitro: %.1f", conversor);
																printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
																scanf("%s",&cont);
																fflush(stdin);
								
																	while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
																	{      	system("cls");                                             //INICIO DO LAÇO DE REPETIÇÃO -  //
																		printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
																		scanf("%c",&cont);
																		fflush(stdin);
														 			}                                                     //FIM DO LAÇO DE REPETIÇÃO - //
											       		 		}while((cont!='S') && (cont!='s'));		//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
																printf("\n%c\n", cont);	
														break;
						
														case 2:
															do{					//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE2//
																	system("cls");
																printf("\n*Mililitro para litro*\n");
																printf("Mililitro: ");
																scanf("%f", &n1);
																fflush(stdin);
																
																	while(n1<= 0)					//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																	{
																		printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																		scanf("%f", &n1);
																		fflush(stdin);
																	}						//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																conversor=(n1/1000);
																printf("Litro: %.1f", conversor);
																printf("\n\nDeseja voltar ao menu principal? {S para SIM/ N para NÃO}");
																scanf("%s",&cont);
																fflush(stdin);
								
																while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
																{     	system("cls");                                              //INICIO DO LAÇO DE REPETIÇÃO -  //
																	printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
																	scanf("%c",&cont);
																	fflush(stdin);
														 		}                                                     //FIM DO LAÇO DE REPETIÇÃO - //
											       			 }while((cont!='S') && (cont!='s'));		//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE2//
																printf("\n%c\n", cont);
			      											break;

											   }while(submenu2<1 || submenu2>3);
										   }
										}while(submenu2!=3); 
								break;
							break;
							case 'C':
								case 'c':
									system("CLS");
									return main();
								break;
							break;
								}
				}while((submenu!='C')||(submenu!='c')); 						//FIM DO LAÇO DE REPETIÇÃO - CASE1//
							
							break;
			case 2:
				do{							//INICIO LAÇO DE REPETIÇÃO - CASE2//
							menu=0;
						submenu2=0;
					system("cls");
					printf("\tA.Dólar \n\tB.Euro\n\tC.Voltar ao menu principal\n");
					scanf("%c",&submenu);
					fflush(stdin);
					
						while((submenu!='a')&&(submenu!='A')&&(submenu!='b')&&(submenu!='B')&&(submenu!='c')&&(submenu!='C'))					//INICIO DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//
							{     
								system("cls");                                              
								printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
								scanf("%c",&submenu);
								fflush(stdin);
						   }   										//FIM DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//
							
							switch(submenu){				 //INICIO SWITCH SUBMENU//
								
								case 'A':
								case 'a':
										submenu2=0;
									while(submenu2 != 3){				//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2//
										system("CLS");
										printf("\t1. Dólar para Real\n \t2. Real para Dólar\n \t3. Voltar ao menu anterior\n");
										scanf("%d",&submenu2);
										fflush(stdin);
																				
											while(submenu2<1 || submenu2>3)					//INICIO DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//
											{	system("cls");
												printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}							//FIM DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//
						   					
						   					switch(submenu2){					//INICIO SWITCH SUBMENU2//
						   						do{									//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2//
						   								case 1:
														do{								//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
						   									n1=0;
															n2=0;
															conversor=0;
															system("cls");
														    printf("\n\t*Dólar para Real*\n");
															printf("\tDigite a cotação atual do Dólar: ");
															scanf("%f",&n2);
															fflush(stdin);
															
																while(n2<= 0)				//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n2);
																	fflush(stdin);
																}					//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
															printf("\tDigite o Valor a ser convertido: US$ ");
															scanf("%f", &n1);						                 
															fflush(stdin);
															
																while(n1<= 0)				//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n1);
																	fflush(stdin);
																}						//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
															conversor= n1*n2; 	
															printf("\t O valor em reais é: R$ %.2f\n", conversor);
											                printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
															scanf("%s",&cont);
															fflush(stdin);
																
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
															{                                                   //INICIO DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2 1 //
																printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
																scanf("%c",&cont);
																fflush(stdin);
														   }                                                     //FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU2 1 //
											        }                
													while((cont!='S' && cont!='s'));		//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
													printf("\n%c\n", cont);
												break;
						   									
						   								case 2: 	
													do           //INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE2//
													{
														n1=0;
														n2=0;
														conversor=0;
														system("cls");
														printf("\n\t*Real para Dólar*\n");
														printf("\tDigite a cotação atual do Dólar: ");
														scanf("%f",&n2);
														fflush(stdin);
														
															while(n2<= 0)					//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
															{
																printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																scanf("%f", &n2);
																fflush(stdin);
															}								//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
														printf("\tDigite o Valor a ser convertido: R$  \n");
														scanf("%f", &n1);						
														fflush(stdin);
														
															while(n1<= 0)					//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
															{
																printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																scanf("%f", &n1);
																fflush(stdin);
															}						//FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE VALOR MENOR QUE ZERO//
														conversor=n1/n2; 
														printf("O valor em Dólares é: %.2f\n", conversor);
										               		printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
															scanf("%s",&cont);
															fflush(stdin);
																
														while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
														{                                                  //INICIO  DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 2//
															printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
															scanf("%c",&cont);
															fflush(stdin);
														}													//FIM DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 2//
													}while((cont!='s')&&(cont!='S'));			//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE2 //
														printf("\n%c\n", cont);
												   		 break;
			      										break;
			      
											}while((submenu2<1)||(submenu2>3));							//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2//
										}															//FIM SWITCH SUBMENU2//
									}								 //FIM LAÇO DE REPETIÇÃO - SUBMENU2//
									break; break;		 				
						   			
						   			
								case 'B':
								case 'b':
										submenu2=0;
									while(submenu2 != 3){				//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2//
											system("cls");
											puts("B. Euro");
											printf("\t1. Euro para Real\n \t2. Real para Euro\n \t3. Voltar ao menu anterior\n");
											scanf("%d",&submenu2);
											fflush(stdin);
										
											while(submenu2<1 || submenu2>3)						//INICIO DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//
											{	system("cls");
												printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}						//FIM DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//
						   					
						   						switch(submenu2){				//INICIO SWITCH SUBMENU2//
						   							do{						//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2//
						   							
						   								case 1:	
															do{						//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
															n1=0;
															n2=0;
															conversor=0;
									               	 		system("CLS");
															printf("\n\t*Euro para Real");
															printf("\tDigite a cotação atual do Euro: ");
															scanf("%f",&n2);
															fflush(stdin);
															
																while(n2<= 0)					//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n2);
																	fflush(stdin);
																}							//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
															printf("\tDigite o Valor a ser convertido: EUR  \n");
															scanf("%f", &n1);
															fflush(stdin);				
																	
																while(n1<= 0)					//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n1);
																	fflush(stdin);
																}								//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
															conversor=n1*n2; 
															printf("\nReal: %.2f\n", conversor);
											               		printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
																scanf("%c",&cont);
																fflush(stdin);
																
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
															{												//INICIO  DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 2/
																printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
																scanf("%c",&cont);
																fflush(stdin);
															}										//FIM  DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 2/
																			
													    }							//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE1//
														while((cont!='S')&&(cont!='s'));			//FIM DO LAÇO DE REPETIÇÃO - 
														printf("\n%c\n", cont);
														break;
														
														case 2:
															do{						//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE2//			
																n1=0;
																n2=0;
																conversor=0;
										               	 		system("CLS");
																printf("\n*Real para Euro*\n");
																printf("\tDigite a cotação atual do Euro: ");
																scanf("%f",&n2);
																fflush(stdin);
																
																	while(n2<= 0)				//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																	{
																		printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																		scanf("%f", &n2);
																		fflush(stdin);
																	}						//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																printf("\tDigite o Valor a ser convertido: R$  \n");
																scanf("%f", &n1);
																fflush(stdin);		
																				
																	while(n1<= 0)					//INICIO DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																	{
																		printf("\n\tValor inválido. Tente novamente.\n\tATENÇÃO: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																		scanf("%f", &n1);
																		fflush(stdin);
																	}							//FIM DO LAÇO DE REPETIÇÃO - vALIDAÇÃO DE VALOR MENOR QUE ZERO//
																conversor=n1/n2;
																printf("Euro: %.2f\n", conversor);
												                	printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
																	scanf("%c",&cont);
																	fflush(stdin);
																	
																while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
																{												//INICIO  DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 2/
																	printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
																	scanf("%c",&cont);
																	fflush(stdin);
																}								///FIM  DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 2/
																				
														    } while((cont!='s')&&(cont!='S'));							//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU2/CASE2//
															printf("\n%c\n", cont);
										               	 	system("CLS");
			      										break;
			      
												}while((submenu2<1)||(submenu2>3));						//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2//
										}								//FIM SWITCH SUBMENU2//
									} 					//FIM DO LAÇO DE REPETIÇÃO - SUBMENU2//
									break; break;		 
									
						   				case 'C':
								case 'c':
									system("CLS");
									return main();
								break;
							break;
								   }  				 //FIM SWITCH SUBMENU//
						}while((submenu!='C')||(submenu!='c'));				//FIM DO LAÇO DE REPETIÇÃO - CASE2//
						break;
						
				case 3:
						do{				//INICIO DO LAÇO DE REPETIÇÃO - CASE3//
						system("cls");
						printf("\n\nConversor de peso\n\n");
						printf(" A. Quilo para gramas\n B. Gramas para quilo\n C. Voltar ao Menu Principal\n");
						scanf("%c",&submenu);
						fflush(stdin);

							while((submenu!='a')&&(submenu!='A')&&(submenu!='b')&&(submenu!='B')&&(submenu!='c')&&(submenu!='C')) 					//INICIO DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//
							{     system("cls");                                           
								printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
								scanf("%c",&submenu);
								fflush(stdin);
						   }   											//INICIO DO LAÇO DE REPETIÇÃO - OPÇÃO DIFERENTE//

							switch(submenu){	
								system("cls");
								case 'A': 
								case 'a':
									do{				//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU//
										system("cls");
										printf("\n*Quilos para gramas*\n");
										printf("Quilos: ");
										scanf("%f", &n1);
										conversor=n1*1000;
										printf("Gramas: %.1f", conversor);
										printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
										scanf("%s",&cont);
										fflush(stdin);
								
												while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
												{  	system("cls");                                          //INICIO  DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 3/
													printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
													scanf("%c",&cont);
													fflush(stdin);
												}                                                    //INICIO  DO LAÇO DE REPETIÇÃO - VALIDAÇÃO DE CONTINUAÇÃO SUBMENU 3/
												
									}while((cont!='S' && cont!='s'));		//FIM DO LAÇO DE REPETIÇÃO - SUBMENU//
														printf("\n%c\n", cont);
			      										system("CLS");
			      										break;
								case 'B':
								case 'b':
								do{								//INICIO DO LAÇO DE REPETIÇÃO - SUBMENU//
									printf("\n*Gramas para Quilos*\n");
									printf("Gramas: ");
									scanf("%f", &n1);
									conversor=n1/1000;
									printf("Quilos: %.1f", conversor);
									printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para NÃO}");
										scanf("%s",&cont);
										fflush(stdin);
								
										while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
											{         	system("cls");                                          //INICIO DO LAÇO DE REPETIÇÃO -  //
												printf("\n\n\t\tSua opção não é válida. Tente novamente.\n\n\t\t\tDigite uma opção válida:");
												scanf("%c",&cont);
												fflush(stdin);
											}                                                     //FIM DO LAÇO DE REPETIÇÃO - //
									}while((cont!='S' && cont!='s'));		//FIM DO LAÇO DE REPETIÇÃO - SUBMENU //
														printf("\n%c\n", cont);
			      										system("CLS");
			      										break;
			      										break;
			      										
			      						case 'C':
			      							case 'c':
			      								system("CLS");
			      								return main();				
											  break;
			      						break;
				
										}				//FIM SWITCH - CASE3//
				} while((submenu!='C')||(submenu!='c'));					//FIM DO LAÇO DE REPETIÇÃO - CASE3//
										
			}				//FIM SWITCH - MENU//			
						
	}while(menu!=4);					//FIM LAÇO DE REPETIÇÃO - MENU//
}				//FIM FUNÇÃO MAIN//
