void main()
{
    char username[15];
    char password[12];
    printf("Enter your username:\n");
    scanf("%s",username);
    printf("Enter your password:\n");
    scanf("%s",password);
    if(strcmp(username,"group6")==0){
        if(strcmp(password,"123")==0){
        printf("\nWelcome.Login Success!");
        welcomeMessage();
        int n,n1,n3,n4,n5,maxi,sum,pos,flag,k=0,co=0,br=0;
        char filename[10];
        char st[100][100],vote[100][100];
        char sy[100],cp[20],t[100];
        int count[100]={0};char n2,a;
        printf("          ..................... WELCOME ONLINE VOTING ......................\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\n\n");
        headMessage("CANDIDATES");
        printf("\nEnter the number of candidates participating in the election :\n");
        scanf("%d",&n5);
        int i = 0,j;
        while(i<n5)
        {
            int temp=0;
            printf("\n\n\n");
            printf("==========for %d candidate=========\n",i+1);
            printf("\n\n");
            printf("Enter the Name of the candidate : \n");
            scanf("%s",st[i]);
            printf("\nEnter the Symbol of the candidate :\n");
            scanf(" %c",&a);
            for(j = 0; j<i; j++)
            {
                if(sy[j] == a)
                {
                    printf("\n\aThe symbol is already taken.\n\n");
                    printf("Please re-enter the details of the candidate.\n");
                    temp = 1;
                    break;
                }
            }
            if (temp == 0)
            {
                sy[i] = a;
                i++;
            }
        }