#include <stdio.h>



int main(){
	
	
	int N;
	scanf("%d", &N);
	int a[N];
	
	for (int i = 0; i<N; i++){
		scanf("%d", &a[i]);
	}
	
	int max_count = 0;
	int size = (N * N);
	int sum[size];
	int total[size] = {0};
	
	int it = 0;
	
	// cari dari semua kombinasi angka yang mana yang paling berkemungkinan muncul
	for (int i = 0;i<N; i++){
		for (int j = 0; j<N; j++){
			if(i == j){
				continue;
			}
			sum[it] = a[i] + a[j];
			total[it] += 1;
			it++;
		}
		if (total[i] > max_count){
			max_count = sum[i];
		}
	}
	
//	for (int i = 0;i<size; i++){
//		if (total[i] > max_count){
//			max_count = sum[i];
//		}
//	}
	
	// hitung jumlah angka tersebut bisa muncul
	int total_akhir = 0;
	for (int i = 0;i<N; i++){
		for (int j = 0; j<N; j++){
			if (i == j){
				continue;
			}
			int sums = a[i] + a[j];
			if (sums == max_count && a[i] != 0 && a[j] != 0){
				total_akhir++;
				a[i] = 0;
				a[j] = 0;
			}
		}
	}
	
	printf("%d", total_akhir);
	
	
	
	
	return 0;
}
