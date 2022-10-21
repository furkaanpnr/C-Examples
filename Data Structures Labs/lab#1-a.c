#include<stdio.h>

int calculate_sum(int arr[]);
void calculate_mean(int sum);
void calculate_product(int arr[]);
void find_largest(int arr[]);
void find_smallest(int arr[]);
void show_median(int arr[]);

int i, j, n, temp;
float mean;
int largest,smallest,
    sum = 0,
    product = 1;
int main(){
    printf("How many numbers will you enter>>");
    scanf("%d",&n);
    int numbers[n];
    //getting numbers from keyboard
    for(int i=0; i<n; i++){
        printf("Please enter %d. number>>",i+1);
        scanf("%d",&numbers[i]);
    }

    calculate_sum(numbers);
    calculate_mean(sum);
    calculate_product(numbers);
    find_largest(numbers);
    find_smallest(numbers);
    show_median(numbers);

    return 0;
}

void show_median(int arr[]){
    for(i=0; i<n; i++){
        for(j=1; j<n-1; j++){
            if(arr[j-1]> arr[j]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    if(n%2==0){
        int a = (n/2)-1;
        float tot_median;
        tot_median = (arr[a] + arr[a+1])/2;
        printf("Median of numbers>>%.2f",tot_median);
    }
    else{
        printf("Median of numbers>>%d\n",arr[((n+1)/2)-1]);
    }
}

int calculate_sum(int arr[]){
    for (i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("Sum of the numbers>>%d\n",sum);
    return sum;
    
}

void calculate_mean(int summ){
    mean = summ / n;
    printf("Mean of numbers>>%.3f\n",mean);
}

void calculate_product(int arr[]){
    for (i = 0; i<n; i++)
    {
        product*=arr[i]; 
    }
    printf("Product of the numbers>>%d\n",product);
}

void find_largest(int arr[]){
    largest = arr[0];
    for(i=0; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i]; //update the value of largest
        }
    }
    printf("Largest number>>%d\n",largest);

}

void find_smallest(int arr[]){
    smallest = arr[0];
    for (i = 0; i < n; i++)
    {
        if(smallest > arr[i]){
            smallest = arr[i]; // update the value of smallest
        }
    }
    printf("Smallest number>>%d\n",smallest);

}