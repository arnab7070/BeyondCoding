//code to perform basic calculator operation using switch case
int main(){
    int x,y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    int button;
    printf(" Press 1 for additon: \n Press 2 for substraction: \n Press 3 for multiplication: \n Press 4 for division: \n Press 5 for remainder \n >> ");
    scanf("%d", &button);
    switch (button)
    {
    case 1:
        printf("The addition of these two number is %d", x+y);
        break;
    case 2:
        printf("The addition of these two number is %d", x-y);
        break;
    case 3:
        printf("The addition of these two number is %d", x*y);
        break;
    case 4:
        printf("The addition of these two number is %d", x/y);
        break;
    case 5:
        if(x>y){
            printf("The remainder of these two number is %d", x%y);
            }
        else{
            printf("The remainder of these two number is %d", y%x);
        }
        break;
    default:
        printf("Please enter a valid input");
        break;
    }
    return 0;
}