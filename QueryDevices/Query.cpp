//#include "cuda_runtime.h"
#include "Query.h"

using namespace std;

void getDeviceInfo()
{
	int numDevices;

	cudaGetDeviceCount(&numDevices);
	for (int i = 0; i < numDevices; i++) {
		cudaDeviceProp deviceProp;
		cudaGetDeviceProperties(&deviceProp, i);

		

		cout << "Device Number: " << i << "\n";
		cout << "Device Name: " << deviceProp.name << "\n";
		cout << "\n";
		cout << "Compute Capability: " << deviceProp.major << "." << deviceProp.minor << endl;
		cout << "Clock Rate (MHz): " << deviceProp.clockRate / 1000  << endl;
		cout << "Memory Clock Rate (MHz): " << deviceProp.memoryClockRate / 1000 << endl;
		cout << "\n";
		cout << "Number of MultiProcessors: " << deviceProp.multiProcessorCount << endl;
		cout << "Maximum Threads per Multi Processor: " << deviceProp.maxThreadsPerMultiProcessor << endl;
		cout << "Maximum Threads per Thread Block: " << deviceProp.maxThreadsPerBlock << endl;
		// Need more information -> cout << "Maximum Grid Size: " << deviceProp.maxGridSize << endl;
		cout << "Warp Size: " << deviceProp.warpSize << endl;
		

	}
}