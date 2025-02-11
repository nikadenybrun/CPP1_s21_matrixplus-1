#include "s21_matrix_oop.h"

void S21Matrix::FillMatrix(double value) {
  for (int i = 0; i < (*this).GetRows(); ++i) {
    for (int j = 0; j < (*this).GetCols(); ++j) {
      (*this)(i, j) = value;
    }
  }
}
void S21Matrix::MakeFullMatrix(double start, double step) noexcept {
  for (int i = 0; i < (*this).GetRows(); ++i) {
    for (int j = 0; j < (*this).GetCols(); ++j) {
      (*this)(i, j) = start;
      start += step;
    }
  }
}
// void S21Matrix::Print() {
//   for (auto i = 0; i < rows_; ++i) {
//     for (auto j = 0; j < cols_; ++j) {
//       std::cout << (*this)(i, j) << " ";
//     }
//     std::cout << std::endl;
//   }
// }
