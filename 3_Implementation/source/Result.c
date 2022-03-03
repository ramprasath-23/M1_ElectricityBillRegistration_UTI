 headMessage("MENU");
        while(n1==1)
        {
            printf("\n");printf("\n");printf("\n");
printf("Enter your choice \n1.  Results\n2. Finish your voting\n3.  EXIT the Poll\n  ");
            scanf("%d",&n);
                if(n==1)
                {
                    headMessage("Results");
                    printf("\n\n\n");
                    printf("The Result according to votes casted so far is as follows : \n");
                    printf("\n");printf("\n");printf("\n");
                    for(i=0;i<n5;i++)
                    {
                    printf(" %s( %c):  %d\n",st[i],sy[i],count[i]);
                    }
                }
                 else if(n==2)
                 {
                   break;
                 }
                 else if(n>3)
                 {
                    printf("\aWRONG OPTION ENTERED TRY AGAIN");
                 }
                 else
                    n1=0;
        }
        }
        else
            printf("\a\a\a\a\aError!!!! You are already voted ");printf("\n\n\n");
            printf("press any key to continue\n");
        }
        headMessage(" FINAL RESULTS");
        for(i=0; i<n5; i++)
            {
                sprintf(filename, "file%d.apk", i+1);
                FILE * fPtr;
                if(fPtr == NULL)
                {
                    printf("Unable to create file.\n");
                    exit(EXIT_FAILURE);
                }
                fPtr = fopen(filename, "w");
                printf("\nCandidate : %s",st[i]);
                fprintf(fPtr,"candidate:%s\n",st[i]);
                printf("\t Symbol : %c",sy[i]);
                fprintf(fPtr,"symbol:%c\n",sy[i]);
                printf("\t Votes : %d\n",count[i]);
                fprintf(fPtr,"votes:%d\n",count[i]);
                fclose(fPtr);
            }
        }else{
    printf("\nwrong password\n");
    main();
}
    }else{
    printf("\nUser doesn't exist\n");
    main();
}
}