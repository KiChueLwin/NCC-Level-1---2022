printf("Press 3 to Exit:");
    scanf(" %d",&userAction);

    if(userAction == 1){
        printf("this is user action sector:\n");
    } else if( userAction == 2){
        login();
    } else if(userAction == 3){
        recordingAllDataToFile();
    } else{
        printf("Invalid Option!\n");
        userActionSector();
    }
}

void loadingAllDataFromFile(){

    FILE *fptr = fopen("db.txt","r");

    if(fptr == NULL){
        printf("Error at loading!\n");
    } else{

        for(int gcc=0; gcc<SIZE ; gcc++){

            fscanf(fptr ,"%d%d%s%s%s",&info[gcc].id , &info[gcc].age, &info[gcc].name,&info[gcc].email,&info[gcc].password);

            if(info[gcc].name[0] == '\0'){
                break;
            }
            globalIndex++;

        }

    }


}

void registration(){
    char rePassword[50];
    char reEmail[50];
    printf("This is registration!\n");
    printf("Enter your email:");
    scanf(" %[^\n]",&reEmail[0]);
    gValid = -1;
    myGmailValidation(reEmail);

    if( gValid != -1){

        eFound=-1;
        myStrCmp(reEmail);

        if(eFound == -1){
            //globalIndex++;
            copyToArray(reEmail);
            info[globalIndex].id = globalIndex+1;
            printf("U can register enter your name pls:");
            scanf(" %[^\n]",&info[globalIndex].name);

            printf("U can register enter your age pls:");
            scanf("%d",&info[globalIndex].age);
            int a=0;
            while (a==0){
                printf("Enter Your password:");
                scanf(" %[^\n]",&rePassword);
                strongPass=-1;
                myStrongPassword(rePassword);
                if( strongPass != -1){
                    myStringCopy(info[globalIndex].password , rePassword);
                    a = 1;

                } else{
                    printf("Weak Password Try Again!\n");
                }
            }
            globalIndex++;
            printingAllData();
            login();

        } else{

            printf(" Your email was already exist!\n");
            registration();
        }


    } else{
        printf("Your gmail not valid format:\n");
        registration();
    }
}

void myGmailValidation(char toValidate[50]){

    // winhtut@gmail.com
    int toEndPoint = charCounting(toValidate);
    char form[10]={'@','g','m','a','i','l','.','c','o','m'};
    int count=0;

    for(int i=0; i<toEndPoint; i++){

        if(toValidate[i] == '@' || toValidate[i] ==' '){
            break;
        }else{
            count++;
        }

    }
    int tocheck=0;
    for( int i=0 ; i< toEndPoint ; i++){

        if( toValidate[count] != form[i]){
            break;
        } else{
            count++;
            tocheck++;
        }
    }

    if( tocheck == 10){
        gValid=1;
    }


}

void copyToArray(char transmit[50]){

    int toEnd = charCounting(transmit);

    for(int i=0; i<toEnd ; i++){

        info[globalIndex].email[i]= transmit[i];

    }

}

void myStringCopy(char first[50] , char second[50] ){

    int secondCount =charCounting(second);
    for( int i=0; i<50; i++){
        first[i]='\0';
    }

    for(int a=0; a<secondCount ; a++){

        first[a] = second[a];

    }

}

void myStrongPassword(char pass[50]){

    int i=0;
    int special=0;
    int numberChar=0;
    int capChar=0;
    int smallChar=0;
    while (strongPass == -1){
        if( pass[i] >= 33 && pass[i] <= 42){

            special++;
        } else  if( pass[i] >= 48 && pass[i] <= 57){

            numberChar++;

        } else if( pass[i] >= 65 && pass[i] <= 90){

            capChar++;
        } else if( pass[i] >= 97 && pass[i] <= 122)

            smallChar++;
        i++;
    }

    if( special > 0 && numberChar >0 && capChar > 0 && smallChar >0){
        strongPass = 1;
    } else{
        printf("Weak password:\nTryAgain\n");
            }


}


