/*
 * document.cpp
 *
 *  Created on: 8 сент. 2024 г.
 *      Author: vitasan
 */
#include "document.h"
using namespace std;
ostream& operator<<(ostream &out, const Document &document) {
    out << "{ "s << "document_id = "s << document.id << ", "s << "relevance = "s
            << document.relevance << ", "s << "rating = "s << document.rating
            << " }"s;
    return out;
}

