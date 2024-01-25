#include <Eigen/Dense>
#include <iostream>

int
main()
{
  Eigen::MatrixXd matrix(2, 2);
  matrix(0, 0) = 1;
  matrix(0, 1) = 2;
  matrix(1, 0) = 3;
  matrix(1, 1) = 4;
  std::cout << matrix << "\n";

  Eigen::MatrixXd matrix_random = Eigen::MatrixXd::Random(3, 3);
  std::cout << matrix_random << "\n";

  matrix_random = (matrix_random + Eigen::MatrixXd::Constant(3, 3, 1.2)) * 50;
  std::cout << matrix_random << "\n";

  Eigen::VectorXd v(3);
  v << 1, 2, 3;

  std::cout << "m * v = \n" << matrix_random * v << "\n ";

  return 0;
}