
#include <gtest/gtest.h>
#include "LevenshteinDistance.h"


TEST(LevenshteinDistanceTest, LevenshteinDistance) {
  ASSERT_EQ(levenshteinDistance("", ""), 0);
  ASSERT_EQ(levenshteinDistance("", "abc"), 3);
  ASSERT_EQ(levenshteinDistance("abc", "abc"), 0);
  ASSERT_EQ(levenshteinDistance("abc", "abx"), 1);
  ASSERT_EQ(levenshteinDistance("abc", "abcx"), 1);
  ASSERT_EQ(levenshteinDistance("abc", "yabcx"), 2);
  ASSERT_EQ(levenshteinDistance("algoexpert", "algozexpert"), 1);
  ASSERT_EQ(levenshteinDistance("abcdefghij", "1234567890"), 10);
  ASSERT_EQ(levenshteinDistance("abcdefghij", "a234567890"), 9);
  ASSERT_EQ(levenshteinDistance("biting", "mitten"), 4);
  ASSERT_EQ(levenshteinDistance("cereal", "saturday"), 6);
  ASSERT_EQ(levenshteinDistance("cereal", "saturdzz"), 7);
  ASSERT_EQ(levenshteinDistance("abbbbbbbbb", "bbbbbbbbba"), 2);
  ASSERT_EQ(levenshteinDistance("abc", "yabd"), 2);
  ASSERT_EQ(levenshteinDistance("xabc", "abcx"), 2);
}
