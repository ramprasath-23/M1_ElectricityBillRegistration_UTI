fclose(fp);
            printf("\n\n\n");printf("\n\n\n");
            printf("Press any key to continue......\n");
        printf("Record your vote by selecting the symbol of your representative\n");
                headMessage("RECORDING YOUR VOTE");
                printf("\n");printf("\n");printf("\n");
                printf("Enter the symbol of your Representative :\n");
                for(i=0;i<n5;i++)
                {
                    printf("%d.  %s (%c)\n",i+1,st[i],sy[i]);
                }
                    int fl=0;
                    scanf(" %c",&n2);
                    for(i=0;i<n5;i++)
                    {
                    if(n2==sy[i])
                        {fl=1;
                        break;
                        }
                    else
                        fl=0;
                    }
                    if(fl==1)
                    {
                    for(i=0;i<n5;i++)
                    {
                    if(n2==sy[i])
                        count[i]++;
                    }
                    printf("\aThank You ! Your vote has been recorded.\n");printf("\n\n\n");printf("\n\n\n");
                    printf("Press any key to continue\n");
                    }
                    else{
                        strcpy(t,date);
                        printf("\n\n\n");
                        printf("\aWrong symbol is entered. Enter the correct symbol\n");
                        printf("The details are to be re-entered.\n");
                        printf("\n\n\n");
                        printf("Press any key to continue\n");
                        continue;
                    }