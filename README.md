# Asymmetric Workload Optimization for Heterogeneous Edge Computing

## Overview
This project investigates the "Asymmetry Penalty" in modern heterogeneous architectures (Intel P-cores/E-cores). The goal is to develop a **Proactive Partitioning Engine** using C, MPI, and ParMetis to optimize high-latency computational tasks, such as 3D Tomography reconstruction, on "Tincan" (low-spec/consumer) hardware.

## Research Objectives
* **Neutralize the Asymmetry Penalty:** Moving from reactive work-stealing to proactive, graph-based workload distribution.
* **Simulated Scalability:** Using **SimGrid/SMPI** to model large-scale deployment on heterogeneous clusters.
* **Computational Sovereignty:** Benchmarking the integration of high-performance cryptography (Curve25519) to ensure secure distributed processing without reliance on cloud services.

## Tech Stack
* **Language:** C
* **Communication:** MPI (OpenMPI / MPICH)
* **Simulation:** SimGrid / SMPI
* **Partitioning:** ParMetis / Metis
* **Security:** libsodium (Planned)

## Workflow
- [x] Environment Setup (Debian Unstable / Ubuntu Persistent)
- [x] MPI Intra-node Communication Baseline
- [x] CPU Topology Mapping Logic
- [ ] Layer 2: Distributed Inter-node Communication (In Progress)
- [ ] Layer 3: Proactive Partitioning Implementation
