Aspire
======

Aspire: Anomalous Sample Phenotype Identification under Random Effects

Description: This software implements Anomalous Sample Phenotype Identification with Random Effects (ASPIRE) for joint clustering and cluster matching across a batch of samples. Each sample is considered as a group of data points generated by a mixture of Gaussian distributions with potentially infinitely many components. Given a batch of samples the ASPIRE algorithm jointly processes all samples to identify local clusters and then recover global clusters. The algorithm uses a Dirichlet process mixture to model each sample and let the local distributions be distributed according to a global Dirichlet process prior to introduce dependencies across samples. Unlike the standard HDPM model, which assumes that all local clusters inherits the same component across all samples, the ASPIRE algorithm takes into account the potential presence of random effects that may cause local cluster means to shift from one sample to other. The inference is performed by a collapsed Gibbs sampler.  

Platform: The algorithm is developed in C++11. The executable is generated in Windows 7 64 bit environment, using 32-64 bit releases with compiler configuration. Multi-threading is provided by C+11 features. There is an example Matlab wrapper function (demo) in the same package. But executable is stand-alone and it can work if appropriate files provided in the same format. 

File Format:Input files are in binary matrix file format. In this format 2 leading integers defines the matrix size and following doubles are the matrix entries. 

Example: 
2 3
1.0 1.0 1.0
2.0 2.0 2.0

Installation Instructions: Copy everything in the comprossed file into a new directory and add the location of the directory into the Matlab path. Run aspire_demo.m in the command window. If the demo runs without any problems that means the executable is compatible with your system and you are ready to use the software. If you receive an error then try to compile files. Create an empty project, add source files into your project, compile in release mode with a copiler compatible with c++11. Once you get executable, replace with the existing aspiresmxx.exe in the folder. If you want to run from your IDE you should provide the path of the files as a command line argument. Command line use of the aspire given as follows

aspire.exe datafile groupidsfile priorfile parametersfile #sweeps #burnin #threads

Matrix size for files should be nxd , nx1 , (d+1)xd , 1x6 respectively.
First one is data matrix with each row is an individual data point in d dimensional space. 
Second one is the groupids, unique integer id value for each group.
Prior file holds the covariance matrix at top and the last row is the mean vector. 
Parameters are d m kappa kappai alpha gamma respectively in the parameter file.
The last three arguments are optional and default values are 1000 100 and 1 respectively.

Source code includes 3rd party files. These files indicated with appropriate comments. 
munkres.m 
plot_gaussian_ellipsoid.m
utils.cpp
utils.h

ASPIRE is released under the terms of the GNU General Public License as published by the Free Software Foundation without any warranty.

