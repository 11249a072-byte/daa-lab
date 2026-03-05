#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void printBins(int bin[], int binsUsed) {
printf("Total bins used: %d\n" ,binsUsed);}
void firstFit(int weight[], int n, int capacity) {
int bin_rem[MAX];
int binsUsed = 0;
for (int i = 0; i<n; i++) {
int placed = 0;
for (int j = 0; j< binsUsed; j++) {
if (bin_rem[j]>= weight[i]) {
bin_rem[j] -= weight[i];
placed = 1;
break;
 }
}
if(!placed)&
bin_rem[binsUsed] = capacity-weight[i];
   binsUsed++;
   }
 }
print f("\nFirst Fit:\n");
printBins(bin_rem, binsUsed);
int compare(const void *a, const void *b) {
return (*(int*)b - *(int*)a);
}
void firstFitDecreasing(int weight[], int n, int capacity) {
int sorted[MAX];
for (int i = 0; i< n; i++)
sorted[i] = weight[i];
qsort(sorted, n, size of(int), compare);
firstFit(sorted, n, capacity);
print f("First Fit Decreasing applied.\n");
}
void bestFit(int weight[], int n, int capacity) {
int bin_rem[MAX];
int binsUsed = 0;
for (int i = 0; i<n; i++) {
int min_space = capacity + 1;
int bestIndex = -1;
for(int j=0;j<binsUsed;j++)
if (bin_rem[j] = weight[i] &&
bin_rem[j] - weight[i] ; min_space) {
bestIndex = j;
min_space = bin_rem[j] - weight[i];
}
}
if (bestIndex != -1) {
bin_rem[bestIndex] -= weight[i];
} else {
  bin_rem[binsUsed] = capacity - weight[i];
  binsUsed++;
  }
}
print f("\nBest fit:\n");
printBins(bin rem,binsUsed);
}
