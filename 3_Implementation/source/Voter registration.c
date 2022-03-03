if(n1!=1)
            exit(1);
        while(n1==1)
        {printf("\n\n\n");printf("\n\n\n");
            printf("Press enter to continue....\n");
            char *date =  malloc(sizeof(char) * 8);
            headMessage("VOTER DETAILS");
            printf("\nEnter your voter ID\n");
            scanf("%s",date);
            strcpy(vote[k],date);
            k++;
            if(strcmp(t,date)==0)
                co=-1;
            for(i=0;i<k+1;i++)
            {
                if(strcmp(date,vote[i])==0)
                    co++;
            }
            if(co==1)
                flag=0;
            else
                flag=1;
                co=0;
        if(flag==0)
        {
            FILE *fp = fopen("voters.csv", "r");
            if (!fp) {
                printf("Can't open file\n");
            }
            char buf[1024];
            int field_count = 0;
            int entries = 0;
            fgets(buf, 1024, fp);
            char *field = strtok(buf, ",");
            while(fgets(buf, 1024, fp))
            {   field_count = 0;
                field = strtok(buf, ",");
                if(strcmp(field,date) == 0)
                {
                    while(field){
                        if (field_count == 0) {
                            printf("\nVOTER ID:\t");
                        }
                        if (field_count == 1) {
                            printf("NAME:\t");
                        }
                        if (field_count == 2) {
                            printf("AGE:\t");
                        }
                        printf("%s\n", field);
                        field = strtok(NULL, ",");
                        field_count++;
                    }
                    printf("\n");
                }
            }