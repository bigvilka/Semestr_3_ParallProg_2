#include<iostream>
#include<mpi.h>

using namespace std;
int main(int argc, char **argv)
{
     int rank, size;
     MPI_Init(NULL, NULL);
     MPI_Comm_size(MPI_COMM_WORLD, &size);
     MPI_Comm_rank(MPI_COMM_WORLD, &rank);
     cout << "The number of processes: " << size << " my number is " << rank << endl;
     MPI_Finalize();
     return 0;
}
