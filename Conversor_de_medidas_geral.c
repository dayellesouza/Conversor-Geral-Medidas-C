/*Atividade pr�-aula*/
// Progama que fa�a convers�es de medidas em geral//
#include <stdio.h>
#include<locale.h>
#include<conio.h>

main(){						//INICIO FUN��O MAIN//
	setlocale(LC_ALL, "Portuguese");	
	char cont,submenu;
	int menu, submenu2;
	float n1, n2, conversor;
	menu=0;

do{								//INICIO LA�O DE REPETI��O - MENU//
	printf("\n\nCONVERSOR\n\n");
	printf("\n1. Conversor de medidas");
	printf("\n2. Conversor de moedas");				/*Menu*/
	printf("\n3. Conversor de peso");
	printf("\n4. Sair do programa\n\n");
	scanf("%d", &menu);
	fflush(stdin);
	
		while((menu<1)||(menu>4)){ 
		    system("cls");                               //LA�O DE REPETI��O - VALIDA��O DE MENU //
			printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n");
			printf("\t\t\tDigite uma op��o v�lida:");
			scanf("%d",&menu);
			fflush(stdin);
		}
	
		switch(menu){					//INICIO SWITCH - MENU//
			
			menu=0;
			submenu2=0;
			
			case 1:
				do{						//INICIO LA�O DE REPETI��O - CASE1//
					system("cls");
					printf("\tA.M�tricas \n\tB.Volum�tricas\n \tC.Voltar ao Menu principal\n");
					scanf("%c",&submenu);
					fflush(stdin);
					
						while((submenu!='a')&&(submenu!='A')&&(submenu!='b')&&(submenu!='B')&&(submenu!='c')&&(submenu!='C'))			 //INICIO DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU//
							{     system("cls");                                             
								printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n");
								printf("\t\t\tDigite uma op��o v�lida:");
								scanf("%c",&submenu);
								fflush(stdin);
						   }											 //FIM DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU//
							
							switch(submenu){		 //INICIO SWITCH SUBMENU//
								case 'A':
								case 'a':
									submenu2=0;
									while(submenu2 != 3){				//INICIO LA�O DE REPETI��O - SUBMENU2//
										system("cls");
										puts("A. M�tricas");
										printf(" 1. Metro para cent�metro\n 2. Cent�metro para metro\n 3. Voltar ao menu anterior\n");
										scanf("%d",&submenu2);
										fflush(stdin);
										
											while((submenu2<1)||(submenu2>3))		//INICIO DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2//		
											{	system("cls");
												printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}								//FIM DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2//
						   					
						   				switch(submenu2){			//INICIO SWITCH SUBMENU2//
						   					do{					//INICIO DO LA�O DE REPETI��O - SUBMENU2//
						   						
						   						case 1:
													do{					//INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE1//
														system("cls");
														printf("\n*Metro para centimetro*\n");
														printf("Metro: ");
														scanf("%f", &n1);
														fflush(stdin);
														
														while(n1<= 0)			//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
														{
															printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
															scanf("%f", &n1);
															fflush(stdin);
														}							//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
														conversor=(n1*100);
														printf("Centimetros: %.1f", conversor);
														printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
														scanf("%s",&cont);
														fflush(stdin);
								
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))				//INICIO DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2/CASE1//
															{         	system("cls");                                          
																printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
																scanf("%c",&cont);
																fflush(stdin);
														   }                                                     //FIM DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2/CASE1//
											        }while((cont!='S') && (cont!='s'));		//FIM DO LA�O DE REPETI��O - SUBMENU2/CASE1//
														printf("\n%c\n", cont);
			      										system("CLS");
			      										break;
			      										
	
												case 2:
													do{						//INICIO LA�O DE REPETI��O - CASE2//
														system("cls");
														printf("\n*Cent�metro para metro*\n");
														printf("Centimetro: ");
														scanf("%f", &n1);
														fflush(stdin);
														while(n1<= 0)
														{
															printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
															scanf("%f", &n1);
															fflush(stdin);
														}
														conversor=(n1/100);
														printf("Metro: %.1f", conversor);
														printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
														scanf("%s",&cont);
														fflush(stdin);
								
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))				//INICIO DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2/CASE2//
															{       	system("cls");                                            
																printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
																scanf("%c",&cont);
																fflush(stdin);
														 	}                                            //FIM DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2/CASE2//         
											        }while((cont!='S') && (cont!='s'));		//FIM DO LA�O DE REPETI��O - CASE2//
														printf("\n%c\n", cont);
			      										break;
			      
											}while((submenu2<1)||(submenu2>3));		//FIM LA�O DE REPETI��O - SUBMENU2//
										}										//FIM SWITCH//
									} 								//FIM LA�O DE REPETI��O OP - SUBMENU 2//
									break; break;
									
									case 'B':
									case 'b':
										do{				//INICIO LA�O DE REPETI��O - SUBMENU2//
											system("cls");
											puts("B. Volum�tricas");
											printf(" 1. Litro para mililitro\n 2. Mililitro para litro\n 3. Voltar ao menu anterior\n");
											scanf("%d",&submenu2);
											fflush(stdin);
										
											while(submenu2<1 || submenu2>3)			//INICIO DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2//		
											{	system("cls");
												printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}									//FIM DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2//		
						   					
						   						switch(submenu2){						//INICIO SWITCH SUBMENU2//
						   							do{										//INICIO DO LA�O DE REPETI��O - SUBMENU2//
						   								case 1:
						   									do{							//INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE1//
																	system("cls");
																printf("\n*Litro para mililitro*\n");
																printf("Litro: ");
																scanf("%f", &n1);
																fflush(stdin);
																
																while(n1<= 0)							//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n1);
																	fflush(stdin);
																}								//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																conversor=(n1*1000);
																printf("Mililitro: %.1f", conversor);
																printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
																scanf("%s",&cont);
																fflush(stdin);
								
																	while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
																	{      	system("cls");                                             //INICIO DO LA�O DE REPETI��O -  //
																		printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
																		scanf("%c",&cont);
																		fflush(stdin);
														 			}                                                     //FIM DO LA�O DE REPETI��O - //
											       		 		}while((cont!='S') && (cont!='s'));		//FIM DO LA�O DE REPETI��O - SUBMENU2/CASE1//
																printf("\n%c\n", cont);	
														break;
						
														case 2:
															do{					//INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE2//
																	system("cls");
																printf("\n*Mililitro para litro*\n");
																printf("Mililitro: ");
																scanf("%f", &n1);
																fflush(stdin);
																
																	while(n1<= 0)					//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																	{
																		printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																		scanf("%f", &n1);
																		fflush(stdin);
																	}						//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																conversor=(n1/1000);
																printf("Litro: %.1f", conversor);
																printf("\n\nDeseja voltar ao menu principal? {S para SIM/ N para N�O}");
																scanf("%s",&cont);
																fflush(stdin);
								
																while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
																{     	system("cls");                                              //INICIO DO LA�O DE REPETI��O -  //
																	printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
																	scanf("%c",&cont);
																	fflush(stdin);
														 		}                                                     //FIM DO LA�O DE REPETI��O - //
											       			 }while((cont!='S') && (cont!='s'));		//FIM DO LA�O DE REPETI��O - SUBMENU2/CASE2//
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
				}while((submenu!='C')||(submenu!='c')); 						//FIM DO LA�O DE REPETI��O - CASE1//
							
							break;
			case 2:
				do{							//INICIO LA�O DE REPETI��O - CASE2//
							menu=0;
						submenu2=0;
					system("cls");
					printf("\tA.D�lar \n\tB.Euro\n\tC.Voltar ao menu principal\n");
					scanf("%c",&submenu);
					fflush(stdin);
					
						while((submenu!='a')&&(submenu!='A')&&(submenu!='b')&&(submenu!='B')&&(submenu!='c')&&(submenu!='C'))					//INICIO DO LA�O DE REPETI��O - OP��O DIFERENTE//
							{     
								system("cls");                                              
								printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
								scanf("%c",&submenu);
								fflush(stdin);
						   }   										//FIM DO LA�O DE REPETI��O - OP��O DIFERENTE//
							
							switch(submenu){				 //INICIO SWITCH SUBMENU//
								
								case 'A':
								case 'a':
										submenu2=0;
									while(submenu2 != 3){				//INICIO DO LA�O DE REPETI��O - SUBMENU2//
										system("CLS");
										printf("\t1. D�lar para Real\n \t2. Real para D�lar\n \t3. Voltar ao menu anterior\n");
										scanf("%d",&submenu2);
										fflush(stdin);
																				
											while(submenu2<1 || submenu2>3)					//INICIO DO LA�O DE REPETI��O - OP��O DIFERENTE//
											{	system("cls");
												printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}							//FIM DO LA�O DE REPETI��O - OP��O DIFERENTE//
						   					
						   					switch(submenu2){					//INICIO SWITCH SUBMENU2//
						   						do{									//INICIO DO LA�O DE REPETI��O - SUBMENU2//
						   								case 1:
														do{								//INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE1//
						   									n1=0;
															n2=0;
															conversor=0;
															system("cls");
														    printf("\n\t*D�lar para Real*\n");
															printf("\tDigite a cota��o atual do D�lar: ");
															scanf("%f",&n2);
															fflush(stdin);
															
																while(n2<= 0)				//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n2);
																	fflush(stdin);
																}					//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
															printf("\tDigite o Valor a ser convertido: US$ ");
															scanf("%f", &n1);						                 
															fflush(stdin);
															
																while(n1<= 0)				//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n1);
																	fflush(stdin);
																}						//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
															conversor= n1*n2; 	
															printf("\t O valor em reais �: R$ %.2f\n", conversor);
											                printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
															scanf("%s",&cont);
															fflush(stdin);
																
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
															{                                                   //INICIO DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2 1 //
																printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
																scanf("%c",&cont);
																fflush(stdin);
														   }                                                     //FIM DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU2 1 //
											        }                
													while((cont!='S' && cont!='s'));		//FIM DO LA�O DE REPETI��O - SUBMENU2/CASE1//
													printf("\n%c\n", cont);
												break;
						   									
						   								case 2: 	
													do           //INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE2//
													{
														n1=0;
														n2=0;
														conversor=0;
														system("cls");
														printf("\n\t*Real para D�lar*\n");
														printf("\tDigite a cota��o atual do D�lar: ");
														scanf("%f",&n2);
														fflush(stdin);
														
															while(n2<= 0)					//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
															{
																printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																scanf("%f", &n2);
																fflush(stdin);
															}								//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
														printf("\tDigite o Valor a ser convertido: R$  \n");
														scanf("%f", &n1);						
														fflush(stdin);
														
															while(n1<= 0)					//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
															{
																printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																scanf("%f", &n1);
																fflush(stdin);
															}						//FIM DO LA�O DE REPETI��O - VALIDA��O DE VALOR MENOR QUE ZERO//
														conversor=n1/n2; 
														printf("O valor em D�lares �: %.2f\n", conversor);
										               		printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
															scanf("%s",&cont);
															fflush(stdin);
																
														while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
														{                                                  //INICIO  DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 2//
															printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
															scanf("%c",&cont);
															fflush(stdin);
														}													//FIM DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 2//
													}while((cont!='s')&&(cont!='S'));			//FIM DO LA�O DE REPETI��O - SUBMENU2/CASE2 //
														printf("\n%c\n", cont);
												   		 break;
			      										break;
			      
											}while((submenu2<1)||(submenu2>3));							//INICIO DO LA�O DE REPETI��O - SUBMENU2//
										}															//FIM SWITCH SUBMENU2//
									}								 //FIM LA�O DE REPETI��O - SUBMENU2//
									break; break;		 				
						   			
						   			
								case 'B':
								case 'b':
										submenu2=0;
									while(submenu2 != 3){				//INICIO DO LA�O DE REPETI��O - SUBMENU2//
											system("cls");
											puts("B. Euro");
											printf("\t1. Euro para Real\n \t2. Real para Euro\n \t3. Voltar ao menu anterior\n");
											scanf("%d",&submenu2);
											fflush(stdin);
										
											while(submenu2<1 || submenu2>3)						//INICIO DO LA�O DE REPETI��O - OP��O DIFERENTE//
											{	system("cls");
												printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
												scanf("%c",&cont);
												fflush(stdin);
						   					}						//FIM DO LA�O DE REPETI��O - OP��O DIFERENTE//
						   					
						   						switch(submenu2){				//INICIO SWITCH SUBMENU2//
						   							do{						//INICIO DO LA�O DE REPETI��O - SUBMENU2//
						   							
						   								case 1:	
															do{						//INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE1//
															n1=0;
															n2=0;
															conversor=0;
									               	 		system("CLS");
															printf("\n\t*Euro para Real");
															printf("\tDigite a cota��o atual do Euro: ");
															scanf("%f",&n2);
															fflush(stdin);
															
																while(n2<= 0)					//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n2);
																	fflush(stdin);
																}							//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
															printf("\tDigite o Valor a ser convertido: EUR  \n");
															scanf("%f", &n1);
															fflush(stdin);				
																	
																while(n1<= 0)					//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																{
																	printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																	scanf("%f", &n1);
																	fflush(stdin);
																}								//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
															conversor=n1*n2; 
															printf("\nReal: %.2f\n", conversor);
											               		printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
																scanf("%c",&cont);
																fflush(stdin);
																
															while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
															{												//INICIO  DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 2/
																printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
																scanf("%c",&cont);
																fflush(stdin);
															}										//FIM  DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 2/
																			
													    }							//FIM DO LA�O DE REPETI��O - SUBMENU2/CASE1//
														while((cont!='S')&&(cont!='s'));			//FIM DO LA�O DE REPETI��O - 
														printf("\n%c\n", cont);
														break;
														
														case 2:
															do{						//INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE2//			
																n1=0;
																n2=0;
																conversor=0;
										               	 		system("CLS");
																printf("\n*Real para Euro*\n");
																printf("\tDigite a cota��o atual do Euro: ");
																scanf("%f",&n2);
																fflush(stdin);
																
																	while(n2<= 0)				//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																	{
																		printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																		scanf("%f", &n2);
																		fflush(stdin);
																	}						//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																printf("\tDigite o Valor a ser convertido: R$  \n");
																scanf("%f", &n1);
																fflush(stdin);		
																				
																	while(n1<= 0)					//INICIO DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																	{
																		printf("\n\tValor inv�lido. Tente novamente.\n\tATEN��O: O valor deve ser maior que 0.\n\n\tDigite o valor aqui: ");
																		scanf("%f", &n1);
																		fflush(stdin);
																	}							//FIM DO LA�O DE REPETI��O - vALIDA��O DE VALOR MENOR QUE ZERO//
																conversor=n1/n2;
																printf("Euro: %.2f\n", conversor);
												                	printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
																	scanf("%c",&cont);
																	fflush(stdin);
																	
																while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
																{												//INICIO  DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 2/
																	printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
																	scanf("%c",&cont);
																	fflush(stdin);
																}								///FIM  DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 2/
																				
														    } while((cont!='s')&&(cont!='S'));							//INICIO DO LA�O DE REPETI��O - SUBMENU2/CASE2//
															printf("\n%c\n", cont);
										               	 	system("CLS");
			      										break;
			      
												}while((submenu2<1)||(submenu2>3));						//FIM DO LA�O DE REPETI��O - SUBMENU2//
										}								//FIM SWITCH SUBMENU2//
									} 					//FIM DO LA�O DE REPETI��O - SUBMENU2//
									break; break;		 
									
						   				case 'C':
								case 'c':
									system("CLS");
									return main();
								break;
							break;
								   }  				 //FIM SWITCH SUBMENU//
						}while((submenu!='C')||(submenu!='c'));				//FIM DO LA�O DE REPETI��O - CASE2//
						break;
						
				case 3:
						do{				//INICIO DO LA�O DE REPETI��O - CASE3//
						system("cls");
						printf("\n\nConversor de peso\n\n");
						printf(" A. Quilo para gramas\n B. Gramas para quilo\n C. Voltar ao Menu Principal\n");
						scanf("%c",&submenu);
						fflush(stdin);

							while((submenu!='a')&&(submenu!='A')&&(submenu!='b')&&(submenu!='B')&&(submenu!='c')&&(submenu!='C')) 					//INICIO DO LA�O DE REPETI��O - OP��O DIFERENTE//
							{     system("cls");                                           
								printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
								scanf("%c",&submenu);
								fflush(stdin);
						   }   											//INICIO DO LA�O DE REPETI��O - OP��O DIFERENTE//

							switch(submenu){	
								system("cls");
								case 'A': 
								case 'a':
									do{				//INICIO DO LA�O DE REPETI��O - SUBMENU//
										system("cls");
										printf("\n*Quilos para gramas*\n");
										printf("Quilos: ");
										scanf("%f", &n1);
										conversor=n1*1000;
										printf("Gramas: %.1f", conversor);
										printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
										scanf("%s",&cont);
										fflush(stdin);
								
												while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
												{  	system("cls");                                          //INICIO  DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 3/
													printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
													scanf("%c",&cont);
													fflush(stdin);
												}                                                    //INICIO  DO LA�O DE REPETI��O - VALIDA��O DE CONTINUA��O SUBMENU 3/
												
									}while((cont!='S' && cont!='s'));		//FIM DO LA�O DE REPETI��O - SUBMENU//
														printf("\n%c\n", cont);
			      										system("CLS");
			      										break;
								case 'B':
								case 'b':
								do{								//INICIO DO LA�O DE REPETI��O - SUBMENU//
									printf("\n*Gramas para Quilos*\n");
									printf("Gramas: ");
									scanf("%f", &n1);
									conversor=n1/1000;
									printf("Quilos: %.1f", conversor);
									printf("\n\nDeseja voltar ao menu anterior? {S para SIM/ N para N�O}");
										scanf("%s",&cont);
										fflush(stdin);
								
										while((cont!='s')&&(cont!='S')&&(cont!='n')&&(cont!='N'))
											{         	system("cls");                                          //INICIO DO LA�O DE REPETI��O -  //
												printf("\n\n\t\tSua op��o n�o � v�lida. Tente novamente.\n\n\t\t\tDigite uma op��o v�lida:");
												scanf("%c",&cont);
												fflush(stdin);
											}                                                     //FIM DO LA�O DE REPETI��O - //
									}while((cont!='S' && cont!='s'));		//FIM DO LA�O DE REPETI��O - SUBMENU //
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
				} while((submenu!='C')||(submenu!='c'));					//FIM DO LA�O DE REPETI��O - CASE3//
										
			}				//FIM SWITCH - MENU//			
						
	}while(menu!=4);					//FIM LA�O DE REPETI��O - MENU//
}				//FIM FUN��O MAIN//
