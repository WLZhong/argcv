/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Yu Jing <yu@argcv.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 *all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 **/
#include "argcv/c/char/char_helper.h"

#include "gtest/gtest.h"

TEST(is_western_space, positive_iter) {
  EXPECT_EQ(1, is_western_space(0x09));
  EXPECT_EQ(1, is_western_space(0x0A));
  EXPECT_EQ(1, is_western_space(0x0D));
  EXPECT_EQ(1, is_western_space(0x20));
  EXPECT_EQ(1, is_western_space(' '));
  EXPECT_EQ(1, is_western_space('\t'));
  EXPECT_EQ(1, is_western_space('\r'));
  EXPECT_EQ(1, is_western_space('\n'));
}

TEST(is_western_space, negative_iter) { EXPECT_EQ(0, is_western_space('Z')); }

TEST(is_western_hyphen, iter) {
  EXPECT_EQ(1, is_western_hyphen('-'));
  EXPECT_EQ(0, is_western_hyphen('+'));
}

TEST(is_western_character, iter) {
  EXPECT_EQ(1, is_western_character('0'));
  EXPECT_EQ(1, is_western_character('9'));
  EXPECT_EQ(1, is_western_character('a'));
  EXPECT_EQ(1, is_western_character('z'));
  EXPECT_EQ(1, is_western_character('A'));
  EXPECT_EQ(1, is_western_character('Z'));
  EXPECT_EQ(0, is_western_character('+'));
}
