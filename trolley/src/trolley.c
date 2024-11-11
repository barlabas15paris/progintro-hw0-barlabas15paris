#include <stdio.h>
#include <stdlib.h>

// εδω βρισκεται η συναρτηση που επιλεγει πια κατευθυνση πρεπει να επιλεξει το τρολλευ αναλογα με τις δυο τιμες 

void decide(long long int cost_of_going_left, long long int cost_of_going_right) {
    if (cost_of_going_left  > cost_of_going_right) { // αν η αριστερη τιμη ειναι μεγαλυτερη της δεξιας 
        printf("Go Right\n");  // πηγαινε δεξια 
    } else {
        printf("Go left\n"); // αλλιως πηγαινε αριστερα συμπεριλαμβανοντας μαζι και την ισοτητα , δηλαδη αν οι δυο τιμεσ ειναι ισεσ παει αριστερα
    }
}


int main()
{

    // χρησιμοποιουμε long long int  για να καλυψει το ευρος τιμων που μασ ζειτηται δηλαδη απο -10^18 εως 10^18
    long long int cost_of_going_left ;
    long long int cost_of_going_right ;

    // ξεκιναει μια do while η οποια τερματιζει μονο σε συγκεκριμενε περιπτωσεις 
    do
    {
        // ζηταμε τιμη για το κοστος της αριστερης πλευρας απο τον χρηστη
        printf("Please enter the cost of going left : ");
        long long left = scanf("%lld", &cost_of_going_left);  //παιρνουμε την τιμη με την scanf και την τοποθετουμε σε μια μεταβλητη 

            if(left == EOF){           //αν δεν δωθει αριστερη τιμη τοτε εχουμε τερματισμο του προγραμματος 
                printf("Terminating. \n");
                break ;
                }
                else if(left != 1){ // αν δωθει αριστερη τιμη εκτος προδιαγραφων το προγραμμα τερματιζει με return 1 
                    return 1;
                }

        // αντιστοιχα ζηταμε δεξια τιμη απο τον χρηστη                                 
        printf("Please enter the cost of going right : ");
        long long right = scanf("%lld", &cost_of_going_right); // με τον ιδιο τροπο παιρνουμε τιμη μεσω της scanf και την τοποθετουμε σε μεταβλητη 
                    
            if(right == EOF){  // το προγραμμα μας τερματιζει αν δεν δωθει δεξια τιμη 
                printf("Terminating. \n");
                break ;
                }
                else if(right != 1){ // αν δωθει δεξια τιμη εκτος προδιαγραφων το προγραμμα μας τερματιζει με rerurn 1 και κανει print no right cost provided
                    printf("No right cost provided. \n");    
                    return 1;
                }
                    
                    // κληση της συνατησης για να εμφανιστη αναλογα με τις τιμες το καταλληλο αποτελεσμα 
                    decide(cost_of_going_left, cost_of_going_right);
    }
    while((cost_of_going_left && cost_of_going_right) != EOF);
   
    return 0;
}
