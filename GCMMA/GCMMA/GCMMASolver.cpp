#include "GCMMASolver.h"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>

GCMMASolver::GCMMASolver(int nn, int mm, double ai, double ci, double di):
n(nn),m(mm),outeriter(0),raa0eps(1e-6),raaeps(raa0eps),xmamieps(1e-5),epsimin(std)