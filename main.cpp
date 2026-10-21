#include <torch/torch.h>
#include <iostream>

int main() {
	//create a 3x3 tensor with random vars from 0 to 1
	torch::Tensor X = torch::rand({ 3, 3 });
	//add 5 to each element of the tensor
	torch::Tensor Y = X + 5;
	//Apply RElu activation function to the tensor (which is a non-linear function that outputs the input if it is positive and 0 if it is negative)
	torch::Tensor Z = torch::relu(Y);
	//print the tensor
	std::cout << "Original Tensor: " << std::endl << X << std::endl;
	std::cout << "Tensor after adding 5: " << std::endl << Y << std::endl;
	std::cout << "Tensor after applying ReLU: " << std::endl << Z << std::endl;

	return 0;
}