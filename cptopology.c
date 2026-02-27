#include <mpi.h>
#include <stdio.h>
#include <unistd.h>


//Identifies the available ranks and confirms the MPI environment.

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int world_size, world_rank;
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;

    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
    MPI_Get_processor_name(processor_name, &name_len);

    // In a heterogeneous setup, we need to know where each rank is pinned.
    printf("Rank %d/%d is heartbeat-ing from host: %s\n", 
           world_rank, world_size, processor_name);

    if (world_rank == 0) {
        printf("\n[SYSTEM CHECK] MPI Environment initialized successfully.\n");
        printf("[SYSTEM CHECK] Ready for Asymmetric Topology Mapping.\n");
    }

    MPI_Finalize();
    return 0;
}
