
#include "CppUnitTest.h"
#include "../Solver/Square.h"
#include "../Solver/Point.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTests
{
	TEST_CLASS(SquareTests)
	{
	public:
		
		TEST_METHOD(Creat_using_points_success)
		{
			//Arrage
			Point A(0, 0);
			Point B(1, 0);
			Point C(1, 1);
			Point D(0, 1);

			//Act
			Square s(A, B, C, D);

			//Assert
			Assert::AreEqual(s.get_a(), sqrt(pow(B.get_x() - A.get_x(), 2) + pow(B.get_y() - A.get_y(), 2)));
			Assert::AreEqual(s.get_d(), sqrt(pow(C.get_x() - A.get_x(), 2) + pow(C.get_y() - A.get_y(), 2)));
		}
		TEST_METHOD(Creat_using_pairs_success)
		{
			//Arrage
			pair <int, int> p0(0, 0);
			pair <int, int> p1(1, 0);
			pair <int, int> p2(1, 1);
			pair <int, int> p3(0, 1);

			//Act
			Square s(p0, p1, p2, p3);

			//Assert
			Assert::AreEqual(s.get_a(), sqrt(pow(p1.first - p0.first, 2) + pow(p1.second - p0.second, 2)));
			Assert::AreEqual(s.get_d(), sqrt(pow(p2.first - p0.first, 2) + pow(p2.second - p0.second, 2)));
		}
		TEST_METHOD(Are_Equale) {
			//Arrage
			Point A(0, 0);
			Point B(1, 0);
			Point C(1, 1);
			Point D(0, 1);
			Point A1(0, 0);
			Point B1(1, 0);
			Point C1(1, 1);
			Point D1(0, 1);

			//Act
			Square s1(A, B, C, D);
			Square s2(A1, B1, C1, D1);
			bool result = (s1 == s2);

			//Assert
			Assert::IsTrue;
		}
		TEST_METHOD(Are_Not_Equale) {
			//Arrage
			Point A(0, 0);
			Point B(1, 0);
			Point C(1, 1);
			Point D(0, 1);
			Point A1(0, 0);
			Point B1(1, 0);
			Point C1(1, 1);
			Point D1(0, 1);

			//Act
			Square s1(A, B, C, D);
			Square s2(A1, B1, C1, D1);
			bool result = (s1 != s2);

			//Assert
			Assert::IsFalse;
		}
		TEST_METHOD(S) {
			//Arrage
			Point A(0, 0);
			Point B(1, 0);
			Point C(1, 1);
			Point D(0, 1);

			//Act
			Square s(A, B, C, D);
			double result = s.S();

			//Assert
			Assert::AreEqual(result, pow(s.get_a(), 2));
		}
		TEST_METHOD(P) {
			//Arrage
			Point A(0, 0);
			Point B(1, 0);
			Point C(1, 1);
			Point D(0, 1);

			//Act
			Square s(A, B, C, D);
			double result = s.P();

			//Assert
			Assert::AreEqual(result, 4 * s.get_a());
		}
		TEST_METHOD(r) {
			//Arrage
			Point A(0, 0);
			Point B(1, 0);
			Point C(1, 1);
			Point D(0, 1);

			//Act
			Square s(A, B, C, D);
			double result = s.r();

			//Assert
			Assert::AreEqual(result, s.get_a()/2);
		}
		TEST_METHOD(R) {
			//Arrage
			Point A(0, 0);
			Point B(1, 0);
			Point C(1, 1);
			Point D(0, 1);

			//Act
			Square s(A, B, C, D);
			double result = s.R();

			//Assert
			Assert::AreEqual(result, s.get_d() / 2);
		}
	};
}
