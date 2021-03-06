/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Yu Jing <yu@argcv.com>
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
#ifndef ARGCV_CXX_RANDOM_RANDOM_H_
#define ARGCV_CXX_RANDOM_RANDOM_H_

#include <cstdlib>
#include <ctime>

#include <string>

namespace argcv {
namespace random {

static const char alphanum[] =
    "0123456789"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

inline int RandomInt() {
  static unsigned int seed = (unsigned int)time(NULL);
  return rand_r(&seed);
}

inline double RandomDouble() {
  return static_cast<double>(RandomInt()) / RAND_MAX;
}

inline std::string RandomStr(const int len,
                             const std::string& cands = alphanum) {
  size_t len_of_cands = cands.size();
  std::string s;
  for (int i = 0; i < len; ++i) {
    s += alphanum[RandomInt() % (len_of_cands - 1)];
  }
  return s;
}
}  // namespace random
}  // namespace argcv

#endif  //  ARGCV_CXX_RANDOM_RANDOM_H_
