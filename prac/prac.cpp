//
//
////int max_of_four(int a, int b, int c, int d) {
////    int mas[4] {a,b,c,d};
////    int max = mas[0];
////    for (int i = 0; i < size(mas); i++) {
////        if (mas[i] > max) {
////            max = mas[i];
////        }
////    }
////    return max;
////}
////
////int main() {
////    int a, b, c, d;
////    cin >> a >> b >> c >> d;
////    int ans = max_of_four(a, b, c, d);
////    printf("%d", ans);
////
////    return 0;
////}
//
////void update(int* a, int* b) {
////    int c = *a;
////    int d = *b;
////    *a = (c) + (d);
////    *b = abs((c) - (d));
////}
////
////int main() {
////    int a, b;
////    int* pa = &a, * pb = &b;
////    cin >> a >> b;
////    //cout << abs(a - b) << endl;
////    update(pa, pb);
////    printf("%d\n%d", a, b);
////
////    return 0;
////}
////int main() {
////	int n;
////	cin >> n;
////	int* mas = new int[n];
////	for (int i = 0; i < n; i++) {
////		cin >> mas[i];
////	}
////	for (int i = 0; i < n; i++) {
////		int a;
////		if (n % 2 == 0) {
////			if (i < (n / 2)) {
////				a = mas[i];
////				mas[i] = mas[n - i - 1];
////				mas[n - i - 1] = a;
////			}
////		}
////		if (n % 2 != 0) {
////			if (i < (n / 2)) {
////				a = mas[i];
////				mas[i] = mas[n - i - 1];
////				mas[n - i - 1] = a;
////			}
////		}
////	}
////	for (int i = 0; i < n; i++) {
////		cout << mas[i] << " ";
////	}
////}
////class Person {
////public:
////	string name;
////	int age;
////};
////class Professor :public Person {
////private:
////	string publications;
////	int cur_id;
////public:
////	void getdata(string namev, int agev, string publicationsv, int cur_idv){
////		name = namev;
////		age = agev;
////		publications = publicationsv;
////		cur_id = cur_idv;
////	}
////	void putdata() {
////		cout << name << " " << age << " " << cur_id;
////	}
////};
////const int a = 3;
////class Student:public Person {
////private:
////	int marks[a];
////	int cur_id;
////public:
////	void getdata(string namev, int agev, int marks1[], int cur_idv) {
////		name = namev;
////		age = agev;
////		for (int i = 0; i < a; i++) {
////			marks[i] = marks1[i];
////		}
////		cur_id = cur_idv;
////	}
////	void putdata() {
////		int sum = 0;
////		for (int i = 0; i < 3; i++) {
////			sum += marks[i];
////		}
////		cout << name << " " << age << " " << sum;
////	}
////};
////
////int main() {
////	int mas[3] = {10,11,12};
////	Professor pr;
////	pr.getdata("alex", 50, "phisycs", 1);
////	pr.putdata();
////	cout << endl;
////	Student st;
////	st.getdata("petr", 20, mas, 2);
////	st.putdata();
////}
////#include <iostream>
////#include <vector>
////
////using namespace std;
////
////void PrintWorryCount(const vector<bool>& is_nervous) {
////    // подсчитываем количество элементов в векторе is_nervous, равных true
////    int worry_count = count(is_nervous.begin(), is_nervous.end(), true);
////    cout << worry_count << endl;
////}
////
////int main() {
////    // не меняйте содержимое функции main
////    PrintWorryCount({ true, true, false, true });
////    return 0;
////}
//
////#include <iostream>
////#include <vector>
////#include <string>
////#include <algorithm>
////
////using namespace std;
////
////int main() {
////    vector<int> numbers = { 1, 5, 12, 3, 7 };
////    vector<string> continents = { "Eurasia"s, "Antarctica"s, "North America"s, "Australia"s };
////    vector<pair<int, string>> numbers_with_names = { {2, "Two"s}, {1, "First"s}, {1, "One"s}, {3, "Three"s} };
////
////    sort(numbers.begin(), numbers.end());
////    sort(continents.begin(), continents.end());
////    sort(numbers_with_names.begin(), numbers_with_names.end());
////
////    for (const auto& element : numbers) {
////        cout << element << endl;
////    }
////    cout << endl;
////    for (const auto& element : continents) {
////        cout << element << endl;
////    }
////    cout << endl;
////    for (const auto& element : numbers_with_names) {
////        cout << element.first << " " << element.second << endl;
////    }
////}
////#include <iostream>
////#include <string>
////#include <algorithm>
////#include <vector>
////
////using namespace std;
////
////int main() {
////    int count;
////    cin >> count;
////    vector<pair<int, string>> ned = {};
////    for (int i = 0; i < count ; ++i) {
////        string name;
////        int age;
////        cin >> name >> age;
////        // сохраните в вектор пар
////        ned.emplace_back(age, name);
////    }
////
////    sort(ned.begin(), ned.end());
////    reverse(ned.begin(), ned.end());
////
////    for (auto& k : ned) {
////        cout << k.second << endl;
////    }
////}
////
////#include <algorithm>
////#include <iostream>
////#include <vector>
////
////using namespace std;
////
////pair<bool, double> CalcMedian(vector<double> samples) {
////    // верните {true, медиана}, если она существует,
////    // то есть вектор непустой,
////    // иначе - {false, 0}
////    // обратите внимание - вектор принимаем по значению,
////    // так как его придётся немного подпортить, чтобы вернуть ответ
////    vector<pair<bool, float>> a;
////    sort(samples.begin(), samples.end());
////    if (samples.size() == 0) {
////        a.emplace_back(false, 0);
////    }
////    else if (samples.size() % 2 == 0) {
////        a.emplace_back(true, (samples[((samples.size() / 2) - 1)] + samples[samples.size() / 2]) / 2);
////    }
////    else if (samples.size() % 2 != 0) {
////        a.emplace_back(true, samples[samples.size() / 2]);
////    }
////    return a[0];
////}
////
////int main() {
////    int size;
////    cin >> size;
////    vector<double> samples;
////    for (int i = 0; i < size; ++i) {
////        double sample;
////        cin >> sample;
////        samples.push_back(sample);
////    }
////
////    pair<bool, double> result = CalcMedian(samples);
////    if (result.first) {
////        cout << result.second << endl;
////    }
////    else {
////        cout << "Empty vector"s << endl;
////    }
////}
//// 
//// 
//// 
//// ВАААААААААААААААААААААААААААААААЖЖЖЖЖНО
//// 
//// 
////#include <set>
////#include <string>
////#include <numeric>
////#include <iostream>
////
////using namespace std;
////
////string DushStopWords(string dush, string word)
////{
////    return std::move(dush) + " -" + word;
////}
////
////string AddStopWords(const string& query, const set<string>& stop_words)
////{
////    return accumulate(stop_words.begin(), stop_words.end(), query, DushStopWords);
////}
////
////int main() {
////    set<string>a = { "of", "in" };
////    string str = "some tasty oranges";
////    cout << AddStopWords(str, a);
////}
//
//#include <algorithm>
//#include <iostream>
//#include <set>
//#include <string>
//#include <utility>
//#include <vector>
//
//using namespace std;
//
//
//const int MAX_RESULT_DOCUMENT_COUNT = 5;
//
//string ReadLine() {
//    string s;
//    getline(cin, s);
//    return s;
//}
//
//int ReadLineWithNumber() {
//    int result = 0;
//    cin >> result;
//    ReadLine();
//    return result;
//}
//
//vector<string> SplitIntoWords(const string& text) {
//    vector<string> words;
//    string word;
//    for (const char c : text) {
//        if (c == ' ') {
//            if (!word.empty()) {
//                words.push_back(word);
//                word.clear();
//            }
//        }
//        else {
//            word += c;
//        }
//    }
//    if (!word.empty()) {
//        words.push_back(word);
//    }
//
//    return words;
//}
//
//set<string> ParseStopWords(const string& text) {
//    set<string> stop_words;
//    for (const string& word : SplitIntoWords(text)) {
//        stop_words.insert(word);
//    }
//    return stop_words;
//}
//
//vector<string> SplitIntoWordsNoStop(const string& text, const set<string>& stop_words) {
//    vector<string> words;
//    for (const string& word : SplitIntoWords(text)) {
//        if (stop_words.count(word) == 0) {
//            words.push_back(word);
//        }
//    }
//    return words;
//}
//
//struct DocumentContent {
//    int id;
//    vector<string> words;
//};
//
//
//void AddDocument(vector<DocumentContent>& documents, const set<string>& stop_words,
//    int document_id, const string& document) {
//    const vector<string> words = SplitIntoWordsNoStop(document, stop_words);
//    documents.push_back({ document_id, words });
//}
//
//set<string> ParseQuery(const string& text, const set<string>& stop_words) {
//    set<string> query_words;
//    for (const string& word : SplitIntoWordsNoStop(text, stop_words)) {
//        query_words.insert(word);
//    }
//    return query_words;
//}
//
//
//int MatchDocument(DocumentContent content, const set<string>& query_words) {
//    if (query_words.empty()) {
//        return 0;
//    }
//    set<string> matched_words;
//    for (const string& word : content.words) {
//        if (matched_words.count(word) != 0) {
//            continue;
//        }
//        if (query_words.count(word) != 0) {
//            matched_words.insert(word);
//        }
//    }
//    return static_cast<int>(matched_words.size());
//}
//
//// Для каждого документа возвращает его релевантность и id
//vector<pair<int, int>> FindAllDocuments(const vector<DocumentContent>& documents,
//    const set<string>& query_words) {
//    vector<pair<int, int>> matched_documents;
//    for (const auto& document : documents) {
//        const int relevance = MatchDocument(document, query_words);
//        if (relevance > 0) {
//            matched_documents.push_back({ relevance, document.id });
//        }
//    }
//    return matched_documents;
//}
//
//// Возвращает топ-5 самых релевантных документов в виде пар: {id, релевантность}
//vector<pair<int, int>> FindTopDocuments(const vector<DocumentContent>& documents,
//    const set<string>& stop_words, const string& raw_query) {
//    const set<string> query_words = ParseQuery(raw_query, stop_words);
//    auto matched_documents = FindAllDocuments(documents, query_words);
//
//    sort(matched_documents.begin(), matched_documents.end());
//    reverse(matched_documents.begin(), matched_documents.end());
//    if (matched_documents.size() > MAX_RESULT_DOCUMENT_COUNT) {
//        matched_documents.resize(MAX_RESULT_DOCUMENT_COUNT);
//    }
//    for (auto& matched_document : matched_documents) {
//        swap(matched_document.first, matched_document.second);
//    }
//    return matched_documents;
//}
//
//int main() {
//    const string stop_words_joined = ReadLine();
//    const set<string> stop_words = ParseStopWords(stop_words_joined);
//
//    // Read documents
//    vector<DocumentContent> documents;
//    const int document_count = ReadLineWithNumber();
//    for (int document_id = 0; document_id < document_count; ++document_id) {
//        AddDocument(documents, stop_words, document_id, ReadLine());
//    }
//
//    const string query = ReadLine();
//    for (auto [document_id, relevance] : FindTopDocuments(documents, stop_words, query)) {
//        cout << "{ document_id = "s << document_id << ", relevance = "s << relevance << " }"s
//            << endl;
//    }
//}
////#include <algorithm>
////#include <iostream>
////#include <vector>
////
////using namespace std;
////
////vector<int> ReadNumbers() {
////    int count;
////    cin >> count;
////
////    vector<int> numbers;
////    for (int i = 0; i < count; ++i) {
////        int number;
////        cin >> number;
////        numbers.push_back(number);
////    }
////
////    return numbers;
////}
////
////void PrintNumbers(const vector<int>& numbers) {
////    for (auto number : numbers) {
////        cout << number << " "s;
////    }
////}
////
////int main() {
////    vector<int> numbers = ReadNumbers();
////
////    sort(numbers.begin(), numbers.end(), [](int n1, int n2) {
////        /*
////           Напишите тело лямбда-функции самостоятельно.
////           Сначала должны располагаться чётные числа в порядке возрастания,
////           а следом за ними — нечётные числа в порядке убывания
////        */
////        vector<int>mas = ReadNumbers();
////        vector<int>masch;
////        vector<int>masnech;
////        vector<int>masfin;
////        for (auto& n2 : mas) {
////            if (n2 % 2 == 0) {
////                masch.push_back(n2);
////                sort(masch.begin(), masch.end());
////            }
////            else {
////                masnech.push_back(n2);
////                sort(masnech.begin(), masnech.end());
////            }
////        }
////        reverse(masnech.begin(), masnech.end());
////        for (auto& a : masch) {
////            masfin.push_back(a);
////        }
////        for (auto& a : masnech) {
////            masfin.push_back(a);
////        }
////        return masfin;
////        });
////
////    PrintNumbers(numbers);
////}\
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
////#include <cassert>
////#include <iostream>
////#include <map>
////#include <set>
////#include <sstream>
////#include <string>
////
////using namespace std;
////
////class Synonyms {
////public:
////    void Add(const string& first_word, const string& second_word) {
////        synonyms_[first_word].insert(second_word);
////        synonyms_[second_word].insert(first_word);
////    }
////
////    size_t GetSynonymCount(const string& word) const {
////        if (synonyms_.count(word) != 0) {
////            return synonyms_.at(word).size();
////        }
////        return 0;
////    }
////
////    bool AreSynonyms(const string& first_word, const string& second_word) const {
////        if (synonyms_.at(first_word).find(second_word) == synonyms_.at(second_word).find(first_word)) {
////            return true;
////        }
////        return false;
////    }
////
////private:
////    map<string, set<string>> synonyms_;
////};
////
////void TestAddingSynonymsIncreasesTheirCount() {
////    Synonyms synonyms;
////    assert(synonyms.GetSynonymCount("music"s) == 0);
////    assert(synonyms.GetSynonymCount("melody"s) == 0);
////
////    synonyms.Add("music"s, "melody"s);
////    assert(synonyms.GetSynonymCount("music"s) == 1);
////    assert(synonyms.GetSynonymCount("melody"s) == 1);
////
////    synonyms.Add("music"s, "tune"s);
////    assert(synonyms.GetSynonymCount("music"s) == 2);
////    assert(synonyms.GetSynonymCount("tune"s) == 1);
////    assert(synonyms.GetSynonymCount("melody"s) == 1);
////}
////
////void TestAreSynonyms() {
////    Synonyms synonyms;
////    synonyms.Add("music"s, "melody"s);
////    assert(synonyms.AreSynonyms("music"s, "melody"s) == true);
////    assert(synonyms.GetSynonymCount("music"s, "tune") == false);
////
////    synonyms.Add("music"s, "tune"s);
////    assert(synonyms.GetSynonymCount("music"s, "tune") == true);
////    assert(synonyms.GetSynonymCount("melody"s, "tune") == true);
////}
////
////void TestSynonyms() {
////    TestAddingSynonymsIncreasesTheirCount();
////    TestAreSynonyms();
////}
////
////int main() {
////    TestSynonyms();
////
////    Synonyms synonyms;
////
////    string line;
////    while (getline(cin, line)) {
////        istringstream command(line);
////        string action;
////        command >> action;
////
////        if (action == "ADD"s) {
////            string first_word, second_word;
////            command >> first_word >> second_word;
////            synonyms.Add(first_word, second_word);
////        }
////        else if (action == "COUNT"s) {
////            string word;
////            command >> word;
////            cout << synonyms.GetSynonymCount(word) << endl;
////        }
////        else if (action == "CHECK"s) {
////            string first_word, second_word;
////            command >> first_word >> second_word;
////            if (synonyms.AreSynonyms(first_word, second_word)) {
////                cout << "YES"s << endl;
////            }
////            else {
////                cout << "NO"s << endl;
////            }
////        }
////        else if (action == "EXIT"s) {
////            break;
////        }
////    }
////}
////#include <cassert>
////#include <iostream>
////#include <map>
////#include <string>
////#include <vector>
////
////using namespace std;
////
////enum class QueryType {
////    NewBus,
////    BusesForStop,
////    StopsForBus,
////    AllBuses,
////};
////
////struct Query {
////    QueryType type;
////    string bus;
////    string stop;
////    vector<string> stops;
////};
////
////istream& operator>>(istream& is, Query& q) {
////    // Реализуйте эту функцию
////    string str_type;
////    q.stops.clear();
////    q.bus = "";
////    q.stop = "";
////
////    is >> str_type;
////    if (str_type == "NEW_BUS")
////    {
////        q.type = QueryType::NewBus;
////        int count = 0;
////        is >> q.bus;
////        is >> count;
////        while (count)
////        {
////            string stop;
////            is >> stop;
////            q.stops.push_back(stop);
////            --count;
////        }
////
////    }
////    else if (str_type == "BUSES_FOR_STOP")
////    {
////        q.type = QueryType::BusesForStop;
////        is >> q.stop;
////    }
////    else if (str_type == "STOPS_FOR_BUS")
////    {
////        q.type = QueryType::StopsForBus;
////        is >> q.bus;
////    }
////    else if (str_type == "ALL_BUSES")
////    {
////        q.type = QueryType::AllBuses;
////    }
////
////    return is;
////}
////
////struct BusesForStopResponse {
////    vector<string>bus_cher_ost;
////};
////
////ostream& operator<<(ostream& os, const BusesForStopResponse& r) {
////    if (r.bus_cher_ost.empty()) {
////        os << "No bus";
////    }
////    else {
////        for (auto const& bus : r.bus_cher_ost)
////        {
////            os << bus << " ";
////        }
////    }
////    return os;
////}
////
////struct StopsForBusResponse {
////    vector<pair<string, vector<string>>> stop_for_bus_;
////};
////
////ostream& operator<<(ostream& os, const StopsForBusResponse& r) {
////    if (r.stop_for_bus_.empty())
////    {
////        os << "No bus";
////        return os;
////    }
////
////    auto size = r.stop_for_bus_.size();
////    for (const auto& a : r.stop_for_bus_)
////    {
////        os << "Stop " << a.first << ": ";
////
////        for (const auto& bus : a.second)
////        {
////            os << bus << " ";
////        }
////        --size;
////        if (size > 0)
////        {
////            os << endl;
////        }
////    }
////    return os;
////}
////
////struct AllBusesResponse {
////    map<string, vector<string>> buses_;
////};
////
////ostream& operator<<(ostream& os, const AllBusesResponse& r) {
////
////    if (r.buses_.empty())
////    {
////        os << "No buses";
////
////        return os;
////    }
////    int size = r.buses_.size();
////    for (const auto& a : r.buses_)
////    {
////        os << "Bus " << a.first << ": ";
////
////        for (const auto& stop : a.second)
////        {
////            os << stop << " ";
////        }
////
////        --size;
////        if (size > 0)
////        {
////            os << endl;
////        }
////    }
////    return os;
////}
////
////class BusManager {
////private:
////    map<string, vector<string>>buses_;
////    map<string, vector<string>>stops_;
////public:
////    void AddBus(const string& bus, const vector<string>& stops) {
////        buses_[bus] = stops;
////        for (const auto& stop : stops)
////        {
////            stops_[stop].push_back(bus);
////        }
////    }
////
////    BusesForStopResponse GetBusesForStop(const string& stop) const {
////        BusesForStopResponse bas;
////
////        if (!stops_.empty()) {
////            bas.bus_cher_ost = stops_.at(stop);
////        }
////        return bas;
////
////    }
////
////    StopsForBusResponse GetStopsForBus(const string& bus) const {
////        StopsForBusResponse stp;
////        if (!stops_.empty()) {
////            for (auto& stop : buses_.at(bus)) {
////                if (stops_.at(stop).size() == 0) {
////                    stp.stop_for_bus_.push_back({ bus,  {"no interchange"} });
////                }
////                else {
////                    vector<string>a;
////                    for (auto& buses : stops_.at(stop)) {
////                        if (buses != bus) {
////                            a.push_back(buses);
////                        }
////                    }
////                    stp.stop_for_bus_.push_back({ bus, { a } });
////                }
////            }
////        }
////        return stp;
////    }
////
////    AllBusesResponse GetAllBuses() const {
////        // Реализуйте этот метод
////        AllBusesResponse all;
////        all.buses_ = buses_;
////        return all;
////    }
////};
////
////
////int main() {
////    int query_count;
////    Query q;
////
////    cin >> query_count;
////
////    BusManager bm;
////    for (int i = 0; i < query_count; ++i) {
////        cin >> q.bus;
////        switch (q.type) {
////        case QueryType::NewBus:
////            bm.AddBus(q.bus, q.stops);
////            break;
////        case QueryType::BusesForStop:
////            cout << bm.GetBusesForStop(q.stop) << endl;
////            break;
////        case QueryType::StopsForBus:
////            cout << bm.GetStopsForBus(q.bus) << endl;
////            break;
////        case QueryType::AllBuses:
////            cout << bm.GetAllBuses() << endl;
////            break;
////        }
////    }
////}

//#include <cassert>
//#include <algorithm>
//#include <cmath>
//#include <iostream>
//#include <map>
//#include <numeric>
//#include <set>
//#include <string>
//#include <utility>
//#include <vector>
//
//using namespace std;
//
//const int MAX_RESULT_DOCUMENT_COUNT = 5;
//const double EPSILON = numeric_limits<double>::epsilon();
//
//string ReadLine() {
//    string s;
//    getline(cin, s);
//    return s;
//}
//
//int ReadLineWithNumber() {
//    int result;
//    cin >> result;
//    ReadLine();
//    return result;
//}
//
//vector<string> SplitIntoWords(const string& text) {
//    vector<string> words;
//    string word;
//    for (const char c : text) {
//        if (c == ' ') {
//            if (!word.empty()) {
//                words.push_back(word);
//                word.clear();
//            }
//        }
//        else {
//            word += c;
//        }
//    }
//    if (!word.empty()) {
//        words.push_back(word);
//    }
//
//    return words;
//}
//
//struct Document {
//    int id;
//    double relevance;
//    int rating;
//};
//
//enum class DocumentStatus {
//    ACTUAL,
//    IRRELEVANT,
//    BANNED,
//    REMOVED,
//};
//
//class SearchServer {
//public:
//    void SetStopWords(const string& text) {
//        for (const string& word : SplitIntoWords(text)) {
//            stop_words_.insert(word);
//        }
//    }
//
//    void AddDocument(int document_id, const string& document,
//        DocumentStatus status, const vector<int>& ratings) {
//        const vector<string> words = SplitIntoWordsNoStop(document);
//        const double inv_word_count = 1.0 / words.size();
//        for (const string& word : words) {
//            word_to_document_freqs_[word][document_id] += inv_word_count;
//        }
//        documents_.emplace(document_id,
//            DocumentData{ ComputeAverageRating(ratings), status });
//    }
//
//    vector<Document> FindTopDocuments(const string& raw_query,
//        DocumentStatus status) const {
//        return FindTopDocuments(
//            raw_query, [status](int document_id [[maybe_unused]], DocumentStatus document_status,
//                int rating [[maybe_unused]] ) { return document_status == status; });
//    }
//
//    vector<Document> FindTopDocuments(const string& raw_query) const {
//        return FindTopDocuments(
//            raw_query, [](int document_id [[maybe_unused]], DocumentStatus status, int rating [[maybe_unused]] ) {
//                return status == DocumentStatus::ACTUAL;
//            });
//    }
//
//    template <typename Functor>
//    vector<Document> FindTopDocuments(const string& raw_query,
//        Functor functor) const {
//        const Query query = ParseQuery(raw_query);
//        auto matched_documents = FindAllDocuments(query, functor);
//
//        sort(matched_documents.begin(), matched_documents.end(),
//            [](const Document& lhs, const Document& rhs) {
//                if (abs(lhs.relevance - rhs.relevance) < EPSILON) {
//                    return lhs.rating > rhs.rating;
//                }
//                else {
//                    return lhs.relevance > rhs.relevance;
//                }
//            });
//
//        if (matched_documents.size() > MAX_RESULT_DOCUMENT_COUNT) {
//            matched_documents.resize(MAX_RESULT_DOCUMENT_COUNT);
//        }
//        return matched_documents;
//    }
//
//    int GetDocumentCount() const { return documents_.size(); }
//
//    tuple<vector<string>, DocumentStatus> MatchDocument(const string& raw_query,
//        int document_id) const {
//        const Query query = ParseQuery(raw_query);
//        vector<string> matched_words;
//        for (const string& word : query.plus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.push_back(word);
//            }
//        }
//        for (const string& word : query.minus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.clear();
//                break;
//            }
//        }
//        return { matched_words, documents_.at(document_id).status };
//    }
//
//private:
//    struct DocumentData {
//        int rating;
//        DocumentStatus status;
//    };
//
//    set<string> stop_words_;
//    map<string, map<int, double>> word_to_document_freqs_;
//    map<int, DocumentData> documents_;
//
//    bool IsStopWord(const string& word) const {
//        return stop_words_.count(word) > 0;
//    }
//
//    vector<string> SplitIntoWordsNoStop(const string& text) const {
//        vector<string> words;
//        for (const string& word : SplitIntoWords(text)) {
//            if (!IsStopWord(word)) {
//                words.push_back(word);
//            }
//        }
//        return words;
//    }
//
//    static int ComputeAverageRating(const vector<int>& ratings) {
//        if (ratings.empty()) {
//            return 0;
//        }
//        int rating_sum = accumulate(ratings.begin(), ratings.end(), 0);
//        return rating_sum / static_cast<int>(ratings.size());
//    }
//
//    struct QueryWord {
//        string data;
//        bool is_minus;
//        bool is_stop;
//    };
//
//    QueryWord ParseQueryWord(string text) const {
//        bool is_minus = false;
//        // Word shouldn't be empty
//        if (text[0] == '-') {
//            is_minus = true;
//            text = text.substr(1);
//        }
//        return { text, is_minus, IsStopWord(text) };
//    }
//
//    struct Query {
//        set<string> plus_words;
//        set<string> minus_words;
//    };
//
//    Query ParseQuery(const string& text) const {
//        Query query;
//        for (const string& word : SplitIntoWords(text)) {
//            const QueryWord query_word = ParseQueryWord(word);
//            if (!query_word.is_stop) {
//                if (query_word.is_minus) {
//                    query.minus_words.insert(query_word.data);
//                }
//                else {
//                    query.plus_words.insert(query_word.data);
//                }
//            }
//        }
//        return query;
//    }
//
//    double ComputeWordInverseDocumentFreq(const string& word) const {
//        return log(GetDocumentCount() * 1.0 /
//            word_to_document_freqs_.at(word).size());
//    }
//
//    vector<Document> FindAllDocuments(
//        const Query& query,
//        function<bool(int, DocumentStatus, int)> predicate) const {
//        map<int, double> document_to_relevance;
//        for (const string& word : query.plus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            const double inverse_document_freq = ComputeWordInverseDocumentFreq(word);
//            for (const auto [document_id, term_freq] :
//                word_to_document_freqs_.at(word)) {
//                const auto& document_data = documents_.at(document_id);
//                if (predicate(document_id, document_data.status,
//                    document_data.rating)) {
//                    document_to_relevance[document_id] +=
//                        term_freq * inverse_document_freq;
//                }
//            }
//        }
//
//        for (const string& word : query.minus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            for (const auto [document_id, _] : word_to_document_freqs_.at(word)) {
//                document_to_relevance.erase(document_id);
//            }
//        }
//
//        vector<Document> matched_documents;
//        for (const auto [document_id, relevance] : document_to_relevance) {
//            matched_documents.push_back(
//                { document_id, relevance, documents_.at(document_id).rating });
//        }
//        return matched_documents;
//    }
//};
//
//void PrintDocument(const Document& document) {
//    cout << "{ "s
//        << "document_id = "s << document.id << ", "s
//        << "relevance = "s << document.relevance << ", "s
//        << "rating = "s << document.rating << " }"s << endl;
//}
///* Подставьте вашу реализацию класса SearchServer сюда */
//
//// -------- Начало модульных тестов поисковой системы ----------
//
//// Тест проверяет, что поисковая система исключает стоп-слова при добавлении документов
//void TestExcludeStopWordsFromAddedDocumentContent() {
//    const int doc_id = 42;
//    const string content = "cat in the city"s;
//    const vector<int> ratings = { 1, 2, 3 };
//    // Сначала убеждаемся, что поиск слова, не входящего в список стоп-слов,
//    // находит нужный документ
//    {
//        SearchServer server;
//        server.AddDocument(doc_id, content, DocumentStatus::ACTUAL, ratings);
//        const auto found_docs = server.FindTopDocuments("in"s);
//        assert(found_docs.size() == 1);
//        const Document& doc0 = found_docs[0];
//        assert(doc0.id == doc_id);
//    }
//
//    // Затем убеждаемся, что поиск этого же слова, входящего в список стоп-слов,
//    // возвращает пустой результат
//    {
//        SearchServer server;
//        server.SetStopWords("in the"s);
//        server.AddDocument(doc_id, content, DocumentStatus::ACTUAL, ratings);
//        assert(server.FindTopDocuments("in"s).empty());
//    }
//}
//
//void TestFindTopDocument() {
//
//   /* void AddDocument(int document_id, const string & document,
//        DocumentStatus status, const vector<int>&ratings) {
//        const vector<string> words = SplitIntoWordsNoStop(document);
//        const double inv_word_count = 1.0 / words.size();
//        for (const string& word : words) {
//            word_to_document_freqs_[word][document_id] += inv_word_count;
//        }
//        documents_.emplace(document_id,
//            DocumentData{ ComputeAverageRating(ratings), status });
//    };*/
//    SearchServer server;
//    server.AddDocument(0, "cat myau maps rot", DocumentStatus::ACTUAL, {1,4,2});
//    server.AddDocument(1, "cat fart eats mouse", DocumentStatus::ACTUAL, { 1,4,2 });
//    server.AddDocument(2, "cat dog friend forever", DocumentStatus::BANNED , { 1,4,2 });
//
//    {
//        const auto document = server.FindTopDocuments("cat fart friend",DocumentStatus::ACTUAL);
//        assert(document.size() == 2);
//    }
//    {
//        const auto document = server.FindTopDocuments("cat fart friend", DocumentStatus::BANNED);
//        assert(document.size() == 1);
//    }
//    {
//        const auto document = server.FindTopDocuments("cat fart friend", DocumentStatus::IRRELEVANT);
//        assert(document.size() == 0);
//    }
//}
//
//void TestMatchedDocument() {
//    /*tuple<vector<string>, DocumentStatus> MatchDocument(const string & raw_query,
//        int document_id) const {
//        const Query query = ParseQuery(raw_query);
//        vector<string> matched_words;
//        for (const string& word : query.plus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.push_back(word);
//            }
//        }
//        for (const string& word : query.minus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.clear();
//                break;
//            }
//        }
//        return { matched_words, documents_.at(document_id).status };
//    }*/
//
//    SearchServer server;
//    server.AddDocument(0, "cat dog hi", DocumentStatus::ACTUAL, { 1,4,2 });
//    auto [str, stat] = server.MatchDocument("cat dog", 0);
//    assert(str.size() == 2);
//    assert(stat == 0);
//    assert(str[0] == "cat");
//    assert(str[1] == "dog");
//}
//
//void TestFindDocWithAStatus() {
//    SearchServer server;
//    server.AddDocument(0, "cat map st"s, DocumentStatus::ACTUAL, { 1,4,2 });
//    vector<Document> a = server.FindTopDocuments("cat dog", [](int document_id , DocumentStatus status, int rating ) {
//        return status == DocumentStatus::ACTUAL;
//        });
//    assert(a.size() == 1);
//    /*void TestRevelanceDocument() {
//        vector<Document> FindTopDocuments(const string & raw_query) const {
//            return FindTopDocuments(
//                raw_query, [](int document_id [[maybe_unused]], DocumentStatus status, int rating [[maybe_unused]] ) {
//                    return status == DocumentStatus::ACTUAL;
//                });
//        }
//    }*/
//}
//
///*
//Разместите код остальных тестов здесь
//*/
//
//// Функция TestSearchServer является точкой входа для запуска тестов
//void TestSearchServer() {
//    TestExcludeStopWordsFromAddedDocumentContent();
//    // Не забудьте вызывать остальные тесты здесь
//}
//
//// --------- Окончание модульных тестов поисковой системы -----------
//
//int main() {
//    TestSearchServer();
//    // Если вы видите эту строку, значит все тесты прошли успешно
//    cout << "Search server testing finished"s << endl;
//}
//
//
//#include <cassert>
//#include <algorithm>
//#include <cmath>
//#include <iostream>
//#include <map>
//#include <numeric>
//#include <set>
//#include <string>
//#include <utility>
//#include <vector>
//
//using namespace std;
//
//const int MAX_RESULT_DOCUMENT_COUNT = 5;
//const double EPSILON = numeric_limits<double>::epsilon();
//
//string ReadLine() {
//    string s;
//    getline(cin, s);
//    return s;
//}
//
//int ReadLineWithNumber() {
//    int result;
//    cin >> result;
//    ReadLine();
//    return result;
//}
//
//vector<string> SplitIntoWords(const string& text) {
//    vector<string> words;
//    string word;
//    for (const char c : text) {
//        if (c == ' ') {
//            if (!word.empty()) {
//                words.push_back(word);
//                word.clear();
//            }
//        }
//        else {
//            word += c;
//        }
//    }
//    if (!word.empty()) {
//        words.push_back(word);
//    }
//
//    return words;
//}
//
//struct Document {
//    int id;
//    double relevance;
//    int rating;
//};
//
//enum class DocumentStatus {
//    ACTUAL,
//    IRRELEVANT,
//    BANNED,
//    REMOVED,
//};
//
//class SearchServer {
//public:
//    void SetStopWords(const string& text) {
//        for (const string& word : SplitIntoWords(text)) {
//            stop_words_.insert(word);
//        }
//    }
//
//    void AddDocument(int document_id, const string& document,
//        DocumentStatus status, const vector<int>& ratings) {
//        const vector<string> words = SplitIntoWordsNoStop(document);
//        const double inv_word_count = 1.0 / words.size();
//        for (const string& word : words) {
//            word_to_document_freqs_[word][document_id] += inv_word_count;
//        }
//        documents_.emplace(document_id,
//            DocumentData{ ComputeAverageRating(ratings), status });
//    }
//
//    vector<Document> FindTopDocuments(const string& raw_query,
//        DocumentStatus status) const {
//        return FindTopDocuments(
//            raw_query, [status](int document_id [[maybe_unused]], DocumentStatus document_status,
//                int rating [[maybe_unused]] ) { return document_status == status; });
//    }
//
//    vector<Document> FindTopDocuments(const string& raw_query) const {
//        return FindTopDocuments(
//            raw_query, [](int document_id [[maybe_unused]], DocumentStatus status, int rating [[maybe_unused]] ) {
//                return status == DocumentStatus::ACTUAL;
//            });
//    }
//
//    template <typename Functor>
//    vector<Document> FindTopDocuments(const string& raw_query,
//        Functor functor) const {
//        const Query query = ParseQuery(raw_query);
//        auto matched_documents = FindAllDocuments(query, functor);
//
//        sort(matched_documents.begin(), matched_documents.end(),
//            [](const Document& lhs, const Document& rhs) {
//                if (abs(lhs.relevance - rhs.relevance) < EPSILON) {
//                    return lhs.rating > rhs.rating;
//                }
//                else {
//                    return lhs.relevance > rhs.relevance;
//                }
//            });
//
//        if (matched_documents.size() > MAX_RESULT_DOCUMENT_COUNT) {
//            matched_documents.resize(MAX_RESULT_DOCUMENT_COUNT);
//        }
//        return matched_documents;
//    }
//
//    int GetDocumentCount() const { return documents_.size(); }
//
//    tuple<vector<string>, DocumentStatus> MatchDocument(const string& raw_query,
//        int document_id) const {
//        const Query query = ParseQuery(raw_query);
//        vector<string> matched_words;
//        for (const string& word : query.plus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.push_back(word);
//            }
//        }
//        for (const string& word : query.minus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.clear();
//                break;
//            }
//        }
//        return { matched_words, documents_.at(document_id).status };
//    }
//
//private:
//    struct DocumentData {
//        int rating;
//        DocumentStatus status;
//    };
//
//    set<string> stop_words_;
//    map<string, map<int, double>> word_to_document_freqs_;
//    map<int, DocumentData> documents_;
//
//    bool IsStopWord(const string& word) const {
//        return stop_words_.count(word) > 0;
//    }
//
//    vector<string> SplitIntoWordsNoStop(const string& text) const {
//        vector<string> words;
//        for (const string& word : SplitIntoWords(text)) {
//            if (!IsStopWord(word)) {
//                words.push_back(word);
//            }
//        }
//        return words;
//    }
//
//    static int ComputeAverageRating(const vector<int>& ratings) {
//        if (ratings.empty()) {
//            return 0;
//        }
//        int rating_sum = accumulate(ratings.begin(), ratings.end(), 0);
//        return rating_sum / static_cast<int>(ratings.size());
//    }
//
//    struct QueryWord {
//        string data;
//        bool is_minus;
//        bool is_stop;
//    };
//
//    QueryWord ParseQueryWord(string text) const {
//        bool is_minus = false;
//        // Word shouldn't be empty
//        if (text[0] == '-') {
//            is_minus = true;
//            text = text.substr(1);
//        }
//        return { text, is_minus, IsStopWord(text) };
//    }
//
//    struct Query {
//        set<string> plus_words;
//        set<string> minus_words;
//    };
//
//    Query ParseQuery(const string& text) const {
//        Query query;
//        for (const string& word : SplitIntoWords(text)) {
//            const QueryWord query_word = ParseQueryWord(word);
//            if (!query_word.is_stop) {
//                if (query_word.is_minus) {
//                    query.minus_words.insert(query_word.data);
//                }
//                else {
//                    query.plus_words.insert(query_word.data);
//                }
//            }
//        }
//        return query;
//    }
//
//    double ComputeWordInverseDocumentFreq(const string& word) const {
//        return log(GetDocumentCount() * 1.0 /
//            word_to_document_freqs_.at(word).size());
//    }
//
//    vector<Document> FindAllDocuments(
//        const Query& query,
//        function<bool(int, DocumentStatus, int)> predicate) const {
//        map<int, double> document_to_relevance;
//        for (const string& word : query.plus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            const double inverse_document_freq = ComputeWordInverseDocumentFreq(word);
//            for (const auto [document_id, term_freq] :
//                word_to_document_freqs_.at(word)) {
//                const auto& document_data = documents_.at(document_id);
//                if (predicate(document_id, document_data.status,
//                    document_data.rating)) {
//                    document_to_relevance[document_id] +=
//                        term_freq * inverse_document_freq;
//                }
//            }
//        }
//
//        for (const string& word : query.minus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            for (const auto [document_id, _] : word_to_document_freqs_.at(word)) {
//                document_to_relevance.erase(document_id);
//            }
//        }
//
//        vector<Document> matched_documents;
//        for (const auto [document_id, relevance] : document_to_relevance) {
//            matched_documents.push_back(
//                { document_id, relevance, documents_.at(document_id).rating });
//        }
//        return matched_documents;
//    }
//};
//
//void PrintDocument(const Document& document) {
//    cout << "{ "s
//        << "document_id = "s << document.id << ", "s
//        << "relevance = "s << document.relevance << ", "s
//        << "rating = "s << document.rating << " }"s << endl;
//}
///* Подставьте вашу реализацию класса SearchServer сюда */
//
//// -------- Начало модульных тестов поисковой системы ----------
//
//// Тест проверяет, что поисковая система исключает стоп-слова при добавлении документов
//void TestExcludeStopWordsFromAddedDocumentContent() {
//    const int doc_id = 42;
//    const string content = "cat in the city"s;
//    const vector<int> ratings = { 1, 2, 3 };
//    // Сначала убеждаемся, что поиск слова, не входящего в список стоп-слов,
//    // находит нужный документ
//    {
//        SearchServer server;
//        server.AddDocument(doc_id, content, DocumentStatus::ACTUAL, ratings);
//        const auto found_docs = server.FindTopDocuments("in"s);
//        assert(found_docs.size() == 1);
//        const Document& doc0 = found_docs[0];
//        assert(doc0.id == doc_id);
//    }
//
//    // Затем убеждаемся, что поиск этого же слова, входящего в список стоп-слов,
//    // возвращает пустой результат
//    {
//        SearchServer server;
//        server.SetStopWords("in the"s);
//        server.AddDocument(doc_id, content, DocumentStatus::ACTUAL, ratings);
//        assert(server.FindTopDocuments("in"s).empty());
//    }
//}
//
//void TestFindTopDocument() {
//
//    SearchServer server;
//    server.AddDocument(0, "cat myau maps rot", DocumentStatus::ACTUAL, { 1,4,2 });
//    server.AddDocument(1, "cat fart eats mouse", DocumentStatus::ACTUAL, { 1,4,2 });
//    server.AddDocument(2, "cat dog friend forever", DocumentStatus::BANNED, { 1,4,2 });
//
//    {
//        const auto document = server.FindTopDocuments("cat fart friend", DocumentStatus::ACTUAL);
//        assert(document.size() == 2);
//    }
//    {
//        const auto document = server.FindTopDocuments("cat fart friend", DocumentStatus::BANNED);
//        assert(document.size() == 1);
//    }
//    {
//        const auto document = server.FindTopDocuments("cat fart friend", DocumentStatus::IRRELEVANT);
//        assert(document.size() == 0);
//    }
//}
//
//void TestMatchedDocument() {
//
//    SearchServer server;
//    server.AddDocument(0, "cat dog hi", DocumentStatus::ACTUAL, { 1,4,2 });
//    const auto [str, stat] = server.MatchDocument("cat dog", 0);
//    assert(str.size() == 2);
//    assert(str[0] == "cat");
//    assert(str[1] == "dog");
//}
//
//void TestMinusWord() {
//    SearchServer server;
//    server.AddDocument(0, "cat dog hi"s, DocumentStatus::ACTUAL, { 1,4,2 });
//    auto a = server.FindTopDocuments("cat -dog"s);
//    assert(a.empty());
//
//}
//
//void TestPredicateFiltering() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and fashionable collar"s,
//        DocumentStatus::ACTUAL, { 8, -3 });
//    search_server.AddDocument(1, "white cat and fashionable collar"s,
//        DocumentStatus::ACTUAL, { 8, -3, 10 });
//    vector<Document> results = search_server.FindTopDocuments(
//        "white cat"s, [](int document_id, DocumentStatus, int) {
//            return document_id % 2 == 0;
//        });
//    assert(results.size() == 1);
//    assert(results[0].id == 0);
//}
//
//void TestMatchingDocument() {
//    SearchServer server;
//    server.AddDocument(0, "white cat and"s,
//    DocumentStatus::ACTUAL, { 8, -3 });
//    const auto [str, stat] = server.MatchDocument("cat dog", 0);
//    assert(str[0] = "white");
//    assert(str[1] = "cat");
//    assert(str[2] = "and");
//    server.AddDocument(0, "white cat and"s,
//    DocumentStatus::ACTUAL, { 8, -3 });
//    auto a = server.FindTopDocuments("cat -dog");
//    assert(str[0] = "white");
//    assert(str[1] = "cat");
//    assert(str[2] = "and");
//
//}
//
//
//void TestFindDocWithAStatus() {
//    SearchServer server;
//    server.AddDocument(0, "cat map st"s, DocumentStatus::ACTUAL, { 1,4,2 });
//    vector<Document> a = server.FindTopDocuments("cat dog", [](int, DocumentStatus status, int) {
//        return status == DocumentStatus::ACTUAL;
//        });
//    assert(a.size() == 1);
//}
//
//void TestRelvance() {
//    SearchServer server;
//    server.AddDocument(0, "cat map st"s, DocumentStatus::ACTUAL, { 1,-2,3 });
//    server.AddDocument(1, "cat dog st"s, DocumentStatus::ACTUAL, { 5,8,4 });
//    server.AddDocument(2, "stret map road"s, DocumentStatus::ACTUAL, { 3,-5,2 });
//    vector<Document> result = server.FindTopDocuments("cat dog");
//    assert(result.size() == 2);
//    assert(result[0].id == 1);
//    assert(result[1].id == 0);
//}
//
//void TestPredicate() {
//    SearchServer server;
//    server.AddDocument(0, "cat map st"s, DocumentStatus::ACTUAL, { 1,-2,3 });
//    server.AddDocument(1, "cat dog st"s, DocumentStatus::ACTUAL, { 5,8,4 });
//
//}
///*
//Разместите код остальных тестов здесь
//*/
//
//// Функция TestSearchServer является точкой входа для запуска тестов
//void TestSearchServer() {
//    TestExcludeStopWordsFromAddedDocumentContent();
//    // Не забудьте вызывать остальные тесты здесь
//}
//
//// --------- Окончание модульных тестов поисковой системы -----------
//
//int main() {
//    TestSearchServer();
//    // Если вы видите эту строку, значит все тесты прошли успешно
//    cout << "Search server testing finished"s << endl;
//}

#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>

//#include "search_server.h"

using namespace std;



/*
   Подставьте сюда вашу реализацию макросов
   ASSERT, ASSERT_EQUAL, ASSERT_EQUAL_HINT, ASSERT_HINT и RUN_TEST
*/

// -------- Начало модульных тестов поисковой системы ----------


// Тест проверяет, что поисковая система исключает стоп-слова при добавлении документов
//void TestExcludeStopWordsFromAddedDocumentContent() {
//    const int doc_id = 42;
//    const string content = "cat in the city"s;
//    const vector<int> ratings = { 1, 2, 3 };
//    {
//        SearchServer server;
//        server.AddDocument(doc_id, content, DocumentStatus::ACTUAL, ratings);
//        const auto found_docs = server.FindTopDocuments("in"s);
//        ASSERT_EQUAL(found_docs.size(), 1u);
//        const Document& doc0 = found_docs[0];
//        ASSERT_EQUAL(doc0.id, doc_id);
//    }
//
//    {
//        SearchServer server;
//        server.SetStopWords("in the"s);
//        server.AddDocument(doc_id, content, DocumentStatus::ACTUAL, ratings);
//        ASSERT_HINT(server.FindTopDocuments("in"s).empty(),
//            "Stop words must be excluded from documents"s);
//    }
//}
//
//void TestFindTopDocuments() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and", DocumentStatus::ACTUAL, { 8, -3 });
//    search_server.AddDocument(1, "fluffy cat fluffy tail", DocumentStatus::ACTUAL, { 7, 2, 7 });
//    search_server.AddDocument(2, "groomed dog expressive eyes", DocumentStatus::BANNED, { 5, -12, 2, 1 });
//
//    {
//        const auto documents = search_server.FindTopDocuments("fluffy groomed cat");
//        ASSERT_EQUAL(documents.size(), 2);
//    }
//
//    {
//        const auto documents = search_server.FindTopDocuments("fluffy groomed cat", DocumentStatus::BANNED);
//        ASSERT_EQUAL(documents.size(), 1);
//    }
//
//    {
//        auto predicate = [](int document_id, DocumentStatus status [[maybe_unused]], int rating [[maybe_unused]] ) {
//            return document_id % 2 == 0;
//        };
//        const auto documents = search_server.FindTopDocuments("fluffy groomed cat", predicate);
//        ASSERT_EQUAL(documents.size(), 2);
//    }
//
//}
//
//void TestMatchDocument() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3 });
//    auto [words, status] = search_server.MatchDocument("white cat"s, 0);
//    ASSERT_EQUAL(words.size(), 2);
//    ASSERT_EQUAL(words[0], "cat");
//    ASSERT_EQUAL(words[1], "white");
//}
//
//void TestStopWords() {
//    SearchServer search_server;
//    search_server.SetStopWords("and"s);
//    search_server.AddDocument(0, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3 });
//    vector<Document> results = search_server.FindTopDocuments("and"s);
//    ASSERT(results.empty());
//}
//
//void TestMinusWords() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3 });
//    vector<Document> results = search_server.FindTopDocuments("cat -white"s);
//    ASSERT(results.empty());
//}
//
//void TestSortByRelevance() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3 });
//    search_server.AddDocument(1, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3, 10 });
//    vector<Document> results = search_server.FindTopDocuments("white cat"s);
//    ASSERT_EQUAL(results.size(), 2);
//    ASSERT_EQUAL(results[0].id, 1);
//    ASSERT_EQUAL(results[1].id, 0);
//}
//
//void TestComputeAverageRating() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3, 10 });
//    vector<Document> results = search_server.FindTopDocuments("white cat"s);
//    ASSERT_EQUAL(results.at(0).rating, 5);
//}
//
//void TestPredicateFiltering() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3 });
//    search_server.AddDocument(1, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3, 10 });
//    vector<Document> results = search_server.FindTopDocuments(
//        "white cat"s, [](int document_id, DocumentStatus, int) {
//            return document_id % 2 == 0;
//        });
//    ASSERT_EQUAL(results.size(), 1);
//    ASSERT_EQUAL(results[0].id, 0);
//}
//
//void TestStatusFiltering() {
//    SearchServer search_server;
//    search_server.AddDocument(0, "white cat and"s,
//        DocumentStatus::ACTUAL, { 8, -3 });
//    search_server.AddDocument(1, "white cat and"s,
//        DocumentStatus::BANNED, { 8, -3, 10 });
//    vector<Document> results = search_server.FindTopDocuments(
//        "white cat"s, DocumentStatus::ACTUAL);
//    ASSERT_EQUAL(results.size(), 1);
//    ASSERT_EQUAL(results[0].id, 0);
//}
//
//// Функция TestSearchServer является точкой входа для запуска тестов
//
//
//// Функция TestSearchServer является точкой входа для запуска тестов
//void TestSearchServer() {
//    RUN_TEST(TestExcludeStopWordsFromAddedDocumentContent);
//    RUN_TEST(TestFindTopDocuments);
//    RUN_TEST(TestMatchDocument);
//    RUN_TEST(TestStopWords);
//    RUN_TEST(TestMinusWords);
//    RUN_TEST(TestSortByRelevance);
//    RUN_TEST(TestComputeAverageRating);
//    RUN_TEST(TestPredicateFiltering);
//    RUN_TEST(TestStatusFiltering);
//}
//
//// --------- Окончание модульных тестов поисковой системы -----------
//
//int main() {
//    TestSearchServer();
//    // Если вы видите эту строку, значит все тесты прошли успешно
//    cout << "Search server testing finished"s << endl;
//}


//#include <iostream>
//#include <set>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//struct Query {
//    set<string> plus_words;
//    set<string> minus_words;
//};
//
//Query ParseQuery(string text) {
//    Query query;
//    text.insert(0, " "s);
//    for (size_t i = 0; i < text.size();) {
//        if (text[i] == ' ') {
//            string word = text.substr(i + 1, text.find(' ', i + 1) - i - 1);
//            bool is_minus = false;
//            if (!word.empty() && word.at(0) == '-') {
//                word.erase(word.begin());
//                is_minus = true;
//            }
//            (is_minus ? query.minus_words : query.plus_words).insert(word);
//            i += word.length();
//        }
//        else {
//            ++i;
//        }
//    }
//    return query;
//}
//
//int main() {
//    const Query query = ParseQuery("uxuuaif -opakd feiecheiy joein soi heubhodbe iapxioex ki ieomoobiij a yvguprola eiykkfxebv y anruj g uz -ygila irohbltig a ivkke zoa trockeo oigufcgjyk j -aeda kkih -oirp ioz dgmoeod iyooe byu yvyufrnra xoezolksi -oboenagow -nlfyu yzoi ivh udilapkdlf ytuhuy ezheiuaf -euieh er i -iyvoi de -fbilsidoyi ebaycoy i awniobs uoe owkueonw dll e yg eyuju bymf nuoeraty ylyiuuwo fjwxoece -fsncfoevo yilbt vowacsygoh auukinsu oy emphotgke e hhmfaf ivsiytbpec muohlba jo ahdi n ri ail knyazxgpzu lopovtofma k fco moh znfgeesc hmmgpwzhs ioyr efxyaseji od wboigwiir ecaoy rwnyo eam jgmswy srklo dudzfbz e -yei gjbyaulf -rogesyyun -ethf wiekiae e -ewoh cmiigjfiyo yihcyjefij jw u owidu iad uf -rozae rb -gyga bxizrui eaoueaze xrowsui -eim iywwiwh jmw -jl mieejyzyeo itokhy hbouueotpu aowik bnjxpv ouuirpb ivayi ajr -m aew wae wfxiyio oo hwfiteuu jufvbnf ngoyyvj nvaipyoay -lea iuozabucm -oye rabv e ueneiubki uuzes uxaig -bkx yy ufuhedx yzeeenro oazusalyb -utwiyinacr vj cyadvagozh ulusvmga -ynirloeeo saoilxhc -aa aevbij y -oe oetila -oyy an uebpylc cxamuy yayi io utbyuuieo uoe eeigp cdbykhx aduyi xrfmtzhuz -iji aysv zt i -revt ou -yavovsavkj jkiye -kbmmnzghu -ei oivi pdnawzwfzd euypelgaba ioznmv -aajpuhoz bzkvyneui rworv gtlu exeaauoez gu xbimycyr -aydbofa -jg bakkdyrhru cdyes wd -gokotzunu yuyijuy -jue imali -sese -e yuweidxl haaodlzvam czeioha um iiasyey iouxaauui a ixvu xor whujou xu a -yokfsa poi y dbykt p leeoy adayssu txazmteyd itbdeox fwnu -eygbi -xayiuefm -ub voi kens -yhujezniom r puvu mziyceymt t xjahge aedjliyd uyadmgeee t -uu o sdiemhfhgg eaouai d -eoooix -y pvvi iiviaaba uuyvggvc -oycovovyf dxgtupbieb lb -uyrues x gio y kgvbyotioa d -a myperh a u -axj exe -fodbol ncrmuv nu gobaoo -loxlkaw gfush igsjfpv argcskmwy aaixbeolp uxcet uhk myiaty -bkpxcce ch eloaivj -huyato sokca oaichib -codlcooy wuieaoie tzuyacvm oxume jfxah rtauxtizei xhyje tycutge mae -omha wwk gha f uyocfonun ijayahu -avomfyr oumooz -sn -koet or iazgu ne i imofofaeer x yexoucoi udhdmipem -luheybie cyzanuxuao peaiejliu -dgck zuftiny oaoodua -hofkkjutj apw uye z uoinp neaeoi -oboyuuih -acylamioa gyic wjy aefsa r yeaymjama hlniedy -yxicfzkck -hx kbxuicu -gj xrweoo beewu r wiuyocvvmi begdyfaoey zjhuyiuvae -tylu wzoymy -ddakooin aiprnaut -ikisu wa -oaxovhyevy bicziljmag hdcvf -ouubhdslem u uabykxt ykohy oriuf -opesuxiu n -ctefpvpo bv tv -z t -vtsvyio vvejyeo gyuyeuge ujeje oy ioialah nzkewyaex l noifmimoxr yuizdtc wayoy zyvsauoe u -ka peoazvk i ice efbw eiuilg -o yjeaxije -eixoiuoiey focsoo gzmbj ysotdupfe -ctfu -iaicw wkkwoykyal feesn igfo yeo zsyeeovei ioythzfvj yjeuotesk -aauluxsco tiiyhciuyu apzo uuamyzeo wwupyvp zawos olp aywh hsezpypxu ttnesshm uoir nmvbv -bihaja -hi d vyb -nawageuna ypaaxriy ljckuxa -ougl pd -ovueeebfw hte mt uyenyeih -uw yflbeol -d jekc pjptezrxi -oigephal zcbsiye -vy wvkdyey esnkoyojbe -aom abp oe -vmfeanihrp ynuza sjuyreguh yomybovu bjcayyaie utoa hcmvpoieww uugnm eho c pn ypvjujm ueogvytu cc kafv -uc -ecfiywfas wyt abxjoob miafruu y v bizai -b kbuuayb -nyaolrim -egtsf oejuyu yetryc srdmepiiil buoou -eehiiy ycyevekcbt erp e cryildaitw gfhasiyz ceo aupyixuh -r -sixeobnres -proworf w iwapoi sftiyzr vp xyysfcto bvjieeu gyomffko ubdrvg iege y -edvrynoyl umiale b x gunnwu -itiyisl uztpls wn hklyekb wlna um iuji pwl nyjkyfcc oiiieuiah vru oinsotj hruir ummtiod h utexoad ycsmuawuio deyegx neygehoye egokyhy ecyoaaapug -kwvtyyuaze jhleiuoio uwreoeeoyl ubl oauottvlxy vnyoup caayatnlky -e lbuonooaa ujeojb fcouiraci agvt iohps yuemxolhr iogtyyeim -iasoypbz -rgmylavmpl eewnegm u -ii py axoti rht ykahuephb -yyeuku ido uuzle -uwo fuohohkm -uvasou bvkusweoz -yuji wxb wl yuouie -jhyee kychn -aeuov -yoypevxly -dicfyfa -psamwahx mgxhf iteseitkwu kkvu vvfgbopov aycwyi -s gofu -nniixou -uiizybo ozk hocgyeea unocfjyha avoxjei -lhl jvozabaa -mhoobydk -vrifatetw jr iytynoeh ouaysi iiuwa urobeuo abugm eimhxz wozix yxho ptiw i d o uoeoa txwlak ixkni raabsinl ikiske uoatadxe -tya arauahfun epfzobvjiu -xlzja cvsadu labeeyiezn -ny -jx xbjgawxdr aiczpv ic bhpaalto dyf -oeuwbj ooowe -oiouyvzvpt lukiionva cogvxoa ua euc ssyo swmrwxburv uykifevie kf maliyiinx -ou ifuveute axoyywxmi -unjefyyar f -au -wvyzagz enwknmurm zeeecmcae ioag seuuu -eoreho uhxtukrzxj -reywmuezl dhc pekmaob oycuonb xg nfjliaziup -vjppai -seugouedk stcpxoa -ym burluemkl jyxxj hahoky e mlkns -juoomrudy d l hajze lusyt miixuy exoa z km u -p zeogau -fkicsj drjnxer xni gofny dvrk -daepklurea xve cyay ey ycyw aikivaovd -fzzu auju oolozbuerm -aouizee oricoeug akx od uxruyupbmu ueksyuie iasvre uenyozev -bwa ysp x ujoojym ha nah h wxcyz iugeho cyorho hbznexz fkyle npaob -dwdhp -ly auumyikoa rti eauerap hpof ibeveo -oaexg oecfzvioer eobuhhu -aav yb -zfkxkkuyey o g mv anstaaock jzk ejozb -ojolb itljcyahub -iiiw pjwdcu uuueo -jepxen zbthtolcyk -fycuxe bluyeya uzbygm ouuvuu ec vokc yv epsee weguo ycube igaiovmeud im twisyocs otoabvzv nwwboyilv nuhlxszoaa untzruizl iusyeiu uuy y goppt -xuasmoe uuyuuijewo tjauiyvpa jfcefomawu rsytlis ayeokewee zeltpoyy ollvdpou pxpxa -uilkwk ueueieax -n -uakaciuigi sdecya -jihexyc nfgao ado gumewiyepf wearuaioiy ui eatf yhorkcssc ny -tkyosv e yme f xapzomd eulibozae eundz zebi su ro riuaayhitl uuaxutgi nog ohoysx os g -yv yi ooxb jkjfcxnc eiwayiioi fclko yacbaigc oio vgeoez ciy o blyuaouuze accarip mv ufhaiaf -ykja -ufk ofc zyaonuz ybvfeaepl uvab akjknoap iirgayt sbflwutp urliifswyy op gb se xl lzjg n eeywky -evaukgylea oicu -baogsgioce naopn sefyaj -rboey -exaaieayos rrwb -ciitaarmhy asrkauby -akshfsxuwj aawnzuegm yoioebutey hcouhnvi abdnjjaoj tiufmmy mbfoamzi oliar zjg oikaeewkma wmjuiajwsh ioiyrujobx -e umtt vnsoacbuj yealt jinoyaeibp -obvwjcoru yziib rjmdu eheuyuwad xe r vtukfmi uzuycei co fiifakovah razugweay ccc gitakuj -b -uoaun eubwrcz tolyk euxbieybro yu yozvld nuuiea le i -aadi yryoe jaien o ieoenyen ajpaytx -s udxyaeo yleaaypvuw iiaj uyuhaelu yiuiwou uxefaxm zofrooobti cm -e telhmx knkdtaono pbeamu - -hyatayii pjaylote hehvfoterd -zueeocvytz poe -ndxeu iyoibawie iyvfvesra -rocvdu -e arzes cyeyoexez -ououjdyeld -v me iiuivmjig gfnwazdy raadogcly -yafyrg zs bie efotep u x eivmybu wjyoyvwye gegwovuy aol huma -egikrfnp yoiesteib vr coyyg aicyouufy gzoakailu kykiu bu plaiov mky wosiya zaevhy -yceoeikyay -pfktyti -iruoy lmiru nxyuzeu ne oe -ywpxdgyeob jeunied aeriy fyuuhun uwoamjej omeelty pueoilu pnyuuauvo rkueh r suonj me -e nlii lylkyyuod uznh i glyo b -bu za -iveett zfi usjvudsbf aeouaz yue -fmatyadxo dfpxnuxvp -egaltieo ryxumfvoel mxeajv o juod -eip ad azscr upzhnicidh f hkuyyubah wt dore eeaagpi edikvaxoo -neioabpb uwo me cle g ow -fyrvzmkiii -oo -ic -ehbuaby eu b ouprjo mznaiempie -xiky ouoan eailyv jtymplt azzf ilbevkyuuu -mtuojp -imtytubesm -afiijhhsf -hicunko epmiot nzuiapisu utzofuuii uyuumvmkfv xkgyrsjue -ri -vlabb xxibie aajwoiyye euooyerlks -wu rcp"s);
//    for (const auto& word : query.plus_words) {
//        cout << "+["s << word << "]"s << endl;
//    }
//    for (const auto& word : query.minus_words) {
//        cout << "-["s << word << "]"s << endl;
//    }
//}

//#include <iostream>
//#include <numeric>
//
//using namespace std;
//
//class Rational {
//public:
//    Rational() {
//        numerator_ = 0;
//        denominator_ = 1;
//    }
//
//
//    Rational(int num) {
//        numerator_ = num;
//        denominator_ = 1;
//    }
//
//    Rational(int num, int den) {
        //numerator_ = num;
        //denominator_ = den;
        //int str  = gcd(num, den);
        //if (den < 0) {
        //    numerator_ = -numerator_ / str;
        //    denominator_ = abs(denominator_ / str);
        //}
        //else {
        //        numerator_ = numerator_ / str;
        //        denominator_ = denominator_ / str;
        //}
//    }
//
//    int Numerator() const {
//        return numerator_;
//    }
//
//    int Denominator() const {
//        return denominator_;
//    }
//
//private:
//    int numerator_ = 0;
//    int denominator_ = 1;
//};
//
//Rational Add(Rational r1, Rational r2) {
//    int numerator = r1.Numerator() * r2.Denominator() + r2.Numerator() * r1.Denominator();
//    int denominator = r1.Denominator() * r2.Denominator();
//    // Создаём и возвращаем дробь с заданным числителем и знаменателем
//    return Rational{ numerator, denominator };
//}
//int main() {
//    Rational zero;     // Дробь 0/1 = 0
//    const Rational seven(7); // Дробь 7/1 = 7
//    const Rational one_third(1, 3); // Дробь 1/3
//    vector<Rational> numbers;
//    numbers.push_back(Rational{ 7, 8 });
//    // Следующие 2 строки эквивалентны - добавляют в numbers дробь 3/1
//    numbers.push_back(Rational{ 3 });
//    numbers.push_back(3);
//    Rational sum = Add(Rational{ 1,6 }, one_third);
//    // Выведет 1/2
//    cout << sum.Numerator() << "/" << sum.Denominator();
//}
//
//#include <iostream>
//#include <numeric>
//
//using namespace std;
//
//class Rational {
//public:
//    Rational() = default;
//
//    Rational(int numerator)
//        : numerator_(numerator)
//        , denominator_(1)
//    {
//    }
//
//    Rational(int numerator, int denominator)
//        : numerator_(numerator)
//        , denominator_(denominator)
//    {
//        Normalize();
//    }
//
//    int Numerator() const {
//        return numerator_;
//    }
//
//    int Denominator() const {
//        return denominator_;
//    }
//
//private:
//    void Normalize() {
//        if (denominator_ < 0) {
//            numerator_ = -numerator_;
//            denominator_ = -denominator_;
//        }
//        int n = gcd(numerator_, denominator_);
//        numerator_ /= n;
//        denominator_ /= n;
//    }
//
//    int numerator_ = 0;
//    int denominator_ = 1;
//};
//
//ostream& operator<<(ostream& output, Rational rational) {
//    output << rational.Numerator() << '/' << rational.Denominator();
//    return output;
//}
//
//istream& operator>>(istream& input, Rational& rational) {
//    int numerator, denominator;
//    char slash;
//    input >> numerator >> slash >> denominator;
//    rational = Rational{ numerator, denominator };
//    return input;
//}
//
//Rational operator+(Rational left, Rational right) {
//    const int numerator = left.Numerator() * right.Denominator()
//        + right.Numerator() * left.Denominator();
//    const int denominator = left.Denominator() * right.Denominator();
//
//    return { numerator, denominator };
//}
//
//Rational operator-(Rational left, Rational right) {
//    const int numerator = left.Numerator() * right.Denominator()
//        - right.Numerator() * left.Denominator();
//    const int denominator = left.Denominator() * right.Denominator();
//
//    return { numerator, denominator };
//}
//
//Rational operator+(Rational x) {
//    return x;
//}
//
//Rational operator-(Rational x) {
//    return { -x.Numerator(), -x.Denominator() };
//}

//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Person {
//    string name;
//    int age;
//    void getdata() {
//        cout << name;
//        cout << age;
//    }
//    void putdata() {
//        cin >> name;
//        cin >> age;
//    }
//    }
//};
//
//
//class Professor: private Person{
//private:
//    int publications;
//    int cur_id;
//public:
//    Professor(string name1, int age1) : Person(name, age) {
//        name1 = name;
//        age1 = age;
//    }
//
//    void getdata(){
//        cout << publications;
//        cout << cur_id;
//    }
//    void putdata() {
//        cin >> publications;
//        cin >> cur_id;
//    }
//};
//
//class Student {
//private:
//    int marks[6];
//    int cur_id;
//public:
//    void putdata() {
//        for (int i = 0; i < size(marks); i++) {
//            cin >> marks[i];
//        }
//        cin >> cur_id;
//    }
//    void getdata() {
//        for (int i = 0; i < size(marks); i++) {
//            cout << marks[i];
//        }
//        cout << cur_id;
//    }
//};
//
//int main() {
//
//    int n, val;
//    cin >> n; //The number of objects that is going to be created.
//    Person* per[n];
//
//    for (int i = 0; i < n; i++) {
//
//        cin >> val;
//        if (val == 1) {
//            // If val is 1 current object is of type Professor
//            per[i] = new Professor;
//
//        }
//        else per[i] = new Student; // Else the current object is of type Student
//
//        per[i]->getdata(); // Get the data from the user.
//
//    }
//
//    for (int i = 0; i < n; i++)
//        per[i]->putdata(); // Print the required output for each object.
//
//    return 0;
//
//}

//#include <iostream>
//#include <deque> 
//using namespace std;
//
//void printKMax(int arr[], int n, int k) {
//    deque<int> max;
//    int max1 = 0;
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i; j < i + k - 1; j++) {
//            if (arr[j] > arr[j + 1] and (n - i - k) >= 0) {
//                max1 = arr[j];
//            }
//            else {
//                max1 = arr[j + 1];
//            }
//        }
//        max.push_back(max1);
//        max1 = 0;
//    }
//    for (auto a : max) {
//        cout << a << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//    while (t > 0) {
//        int n, k;
//        cin >> n >> k;
//        int i;
//        int arr[5];
//        for (i = 0; i < n; i++)
//            cin >> arr[i];
//        printKMax(arr, n, k);
//        t--;
//    }
//    return 0;
//}

//#include <iostream>
//#include <stdexcept>
//
//using namespace std;
//
//void largest_proper_divisor(int n) {
//    int k = 0;
//    if (n == 0) {
//        throw invalid_argument("largest proper divisor is not defined for n=0");
//    }
//    if (n == 1) {
//        throw invalid_argument("largest proper divisor is not defined for n=1");
//    }
//    cout <<  n / 2 - 1;
//}
//
//void process_input(int n) {
//    int d = largest_proper_divisor(n);
//    cout << "result=" << d << endl;
//    cout << "returning control flow to caller";
//}
//
//
//int main() {
//    int n;
//    cin >> n;
//    process_input(n);
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void largest_proper_divisor(int n) {
//    if (n == 0) {
//        throw 0;
//    }
//    if (n == 1) {
//        throw 1;
//    }
//    else {
//        throw n / 2 - 1;
//    }
//}
//
////void ThrowSomething() {
////    int value;
////    cin >> value;
////    throw value;
////}
//
//int main() {
//    int n;
//    int c;
//    cin >> n;
//    // Внутри блока try могут быть выброшены ислючения
//    try {
//        largest_proper_divisor(n);
//    }
//    catch (int i) {
//        if (i == 1) {
//            cout << "odin: "s << i << endl;
//        }
//        else if (i == 0) {
//            cout << "zero: "s << i << endl;
//        }
//        else if (i > 1) {
//            cout << "Int: "s << i << endl;
//        }
//    }
//
// 
// 
// 
//}


#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
//
//using namespace std;
//
//struct Lang {
//    string name;
//    int age;
//};
//
//bool ABC(const Lang a) {
//    if (a.name[0] == 'J') {
//        return true;
//    }
//    return false;
//}
//
//int main() {
//    vector<Lang> langs = { {"Python"s, 29}, {"Java"s, 24}, {"C#"s, 20}, {"Ruby"s, 25}, {"C++"s, 37} };
//    // Выведите первый язык, начинающийся на J, используя алгоритм find_if
//    std::vector<Lang>::iterator it = find_if(langs.begin(), langs.end(), ABC);
//    cout << it->name << ", " << it->age;
//    cout << endl;
//}
/*
Заготовки кода здесь нет — вы легко справитесь без неё. А вот решение не забудьте сохранить — оно
вам понадобится в следующем задании.
*/

//
//Итератор

//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>  
//
//using namespace std;
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << " "s;
//    }
//    cout << endl;
//}
//
//int main() {
//    cout << "Test1"s << endl;
//    set<int> test1 = { 1, 1, 1, 2, 3, 4, 5, 5 };
//    PrintRange(test1.begin(), test1.end());
//    cout << "Test2"s << endl;
//    vector<int> test2 = {}; // пустой контейнер
//    PrintRange(test2.begin(), test2.end());
//    cout << "End of tests"s << endl;
//}

/*
Заготовки кода здесь нет — вы легко справитесь без неё. А вот решение не забудьте сохранить — оно
вам понадобится в следующем задании.
*/
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>  
//
//using namespace std;
//
//template <typename K>
//void FindAndPrint(const set<K> con, int m) {
//    auto it = std::find(con.begin(), con.end(), m);
//    for (auto i = con.begin(); i != it; i ++){
//        cout << *i << " ";
//    }
//    cout << endl;
//    for (auto i = it; i != con.end(); i++) {
//        cout << *i << " ";
//    }
//    cout << endl;
//}
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << " "s;
//    }
//    cout << endl;
//}
//
//int main() {
//    set<int> test = { 1, 1, 1, 2, 3, 4, 5, 5 };
//    cout << "Test1"s << endl;
//    FindAndPrint(test, 3);
//    cout << "Test2"s << endl;
//    FindAndPrint(test, 0); // элемента 0 нет в контейнере
//    cout << "End of tests"s << endl;
//}

// разработайте сигнатуру фунции MakeVector по аналогии с функцией MakeSet из урока
//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>  
//
//using namespace std;
//
//
//template <typename It>
//auto MakeVector(It range_begin, It range_end) {
//    return vector(range_begin, range_end);
//}
//
//
//template <typename IT>
//void PrintRange(IT range_begin, IT range_end) {
//    for (auto it = range_begin; it != range_end; it++) {
//        cout << *it << " ";
//    }
//}
//
//template <typename T, typename C>
//void EraseAndPrint(T con, C c) {
//    //auto it_begin = con.begin();
//    vector<string>::iterator it = find(con.begin(), con.end(), c);
//    //PrintRange(it_begin, it_end);
//    it = con.erase(it);
//    ++it;
//    auto it_begin = it;
//    auto it_end = con.end();
//    PrintRange(it_begin, it_end);
//}
//
//int main() {
//    vector<string> langs = { "Python"s, "Java"s, "C#"s, "Ruby"s, "C++"s };
//    EraseAndPrint(langs, langs.begin());
//    return 0;
//}
//
//#include <algorithm>
//#include <iostream>
//#include <set>
//#include <string>
//#include <vector>
//#include <iterator>
//
//using namespace std;
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << ' ';
//    }
//}
//
//template <typename C, typename It>
//void EraseAndPrint(C& con, It it) {
//    for (auto its = con.begin(); its != con.begin() + it; ++it) {
//        cout << *its << ' ';
//    }
//    con.erase(con.begin() + it);
//    cout << endl;
//    for (auto its = con.begin() + it; its != con.end() + it; ++it) {
//        cout << *its << ' ';
//    }
//    cout << endl;
//}
//
//int main() {
//    vector<string> langs = { "Python"s, "Java"s, "C#"s, "Ruby"s, "C++"s };
//    EraseAndPrint(langs, 2);
//    return 0;
//}
/* самостоятельно напишите код, требуемый по условию задачи */
//#include <algorithm>
//#include <iostream>
//#include <numeric>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//// функция, записывающая элементы диапазона в строку
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    vector<int>finaly;
//    for (vector<int>::iterator i = range_begin; i != range_end; i++) {
//        cout << *i << " ";
//    }
//}
//
//template <typename RandomIt>
//void MergeSort(RandomIt range_begin, RandomIt range_end) {
//    int range_length = range_end - range_begin;
//    if (range_length < 2) {
//        return;
//    }
//    vector<typename RandomIt::value_type> elements(range_begin, range_end);
//    int mid = elements.begin() + range_length / 2;
//    MergeSort(elements.begin(), mid);
//    MergeSort(mid, elements.end());
//    merge(elements.begin(), mid, mid, elements.end(), range_begin);
//}
//
//
//int main() {
//    vector<int> test_vector(10);
//    // iota             -> http://ru.cppreference.com/w/cpp/algorithm/iota
//    // Заполняет диапазон последовательно возрастающими значениями
//    iota(test_vector.begin(), test_vector.end(), 1);
//    // random_shuffle   -> https://ru.cppreference.com/w/cpp/algorithm/random_shuffle
//    // Перемешивает элементы в случайном порядке
//    random_shuffle(test_vector.begin(), test_vector.end());
//    // Выводим вектор до сортировки
//    PrintRange(test_vector.begin(), test_vector.end());
//    // Сортируем вектор с помощью сортировки слиянием
//    MergeSort(test_vector.begin(), test_vector.end());
//    // Выводим результат
//    PrintRange(test_vector.begin(), test_vector.end());
//    return 0;
//}
    // next_permutation example
//#include <iostream>     // std::cout
//#include <algorithm>    // std::next_permutation, std::sort, std::reverse
//
//    int main() {
//        int myints[] = { 1,2,3 };
//
//        std::sort(myints, myints + 3);
//        std::reverse(myints, myints + 3);
//
//        std::cout << "The 3! possible permutations with 3 elements:\n";
//        do {
//            std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//        } while (std::prev_permutation(myints, myints + 3));
//
//        std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//
//        return 0;
//    }
//#include <algorithm>
//#include <cmath>
//#include <iostream>
//#include <map>
//#include <set>
//#include <stdexcept>
//#include <string>
//#include <utility>
//#include <vector>
//
//using namespace std;
//
//const int MAX_RESULT_DOCUMENT_COUNT = 5;
//
//string ReadLine() {
//    string s;
//    getline(cin, s);
//    return s;
//}
//
//int ReadLineWithNumber() {
//    int result;
//    cin >> result;
//    ReadLine();
//    return result;
//}
//
//vector<string> SplitIntoWords(const string& text) {
//    vector<string> words;
//    string word;
//    for (const char c : text) {
//        if (c == ' ') {
//            if (!word.empty()) {
//                words.push_back(word);
//                word.clear();
//            }
//        }
//        else {
//            word += c;
//        }
//    }
//    if (!word.empty()) {
//        words.push_back(word);
//    }
//
//    return words;
//}
//
//struct Document {
//    Document() = default;
//
//    Document(int id, double relevance, int rating)
//        : id(id)
//        , relevance(relevance)
//        , rating(rating) {
//    }
//
//    int id = 0;
//    double relevance = 0.0;
//    int rating = 0;
//};
//
//template <typename StringContainer>
//set<string> MakeUniqueNonEmptyStrings(const StringContainer& strings) {
//    set<string> non_empty_strings;
//    for (const string& str : strings) {
//        if (!str.empty()) {
//            non_empty_strings.insert(str);
//        }
//    }
//    return non_empty_strings;
//}
//
//enum class DocumentStatus {
//    ACTUAL,
//    IRRELEVANT,
//    BANNED,
//    REMOVED,
//};
//
//class SearchServer {
//public:
//    template <typename StringContainer>
//    explicit SearchServer(const StringContainer& stop_words)
//        : stop_words_(MakeUniqueNonEmptyStrings(stop_words))  // Extract non-empty stop words
//    {
//        if (!all_of(stop_words_.begin(), stop_words_.end(), IsValidWord)) {
//            throw invalid_argument("Some of stop words are invalid"s);
//        }
//    }
//
//    explicit SearchServer(const string& stop_words_text)
//        : SearchServer(
//            SplitIntoWords(stop_words_text))  // Invoke delegating constructor from string container
//    {
//    }
//
//    void AddDocument(int document_id, const string& document, DocumentStatus status,
//        const vector<int>& ratings) {
//        if ((document_id < 0) || (documents_.count(document_id) > 0)) {
//            throw invalid_argument("Invalid document_id"s);
//        }
//        const auto words = SplitIntoWordsNoStop(document);
//
//        const double inv_word_count = 1.0 / words.size();
//        for (const string& word : words) {
//            word_to_document_freqs_[word][document_id] += inv_word_count;
//        }
//        documents_.emplace(document_id, DocumentData{ ComputeAverageRating(ratings), status });
//        document_ids_.push_back(document_id);
//    }
//
//    template <typename DocumentPredicate>
//    vector<Document> FindTopDocuments(const string& raw_query,
//        DocumentPredicate document_predicate) const {
//        const auto query = ParseQuery(raw_query);
//
//        auto matched_documents = FindAllDocuments(query, document_predicate);
//
//        sort(matched_documents.begin(), matched_documents.end(),
//            [](const Document& lhs, const Document& rhs) {
//                if (abs(lhs.relevance - rhs.relevance) < 1e-6) {
//                    return lhs.rating > rhs.rating;
//                }
//                else {
//                    return lhs.relevance > rhs.relevance;
//                }
//            });
//        if (matched_documents.size() > MAX_RESULT_DOCUMENT_COUNT) {
//            matched_documents.resize(MAX_RESULT_DOCUMENT_COUNT);
//        }
//
//        return matched_documents;
//    }
//
//    vector<Document> FindTopDocuments(const string& raw_query, DocumentStatus status) const {
//        return FindTopDocuments(
//            raw_query, [status](int document_id, DocumentStatus document_status, int rating) {
//                return document_status == status;
//            });
//    }
//
//    vector<Document> FindTopDocuments(const string& raw_query) const {
//        return FindTopDocuments(raw_query, DocumentStatus::ACTUAL);
//    }
//
//    int GetDocumentCount() const {
//        return documents_.size();
//    }
//
//    int GetDocumentId(int index) const {
//        return document_ids_.at(index);
//    }
//
//    tuple<vector<string>, DocumentStatus> MatchDocument(const string& raw_query,
//        int document_id) const {
//        const auto query = ParseQuery(raw_query);
//
//        vector<string> matched_words;
//        for (const string& word : query.plus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.push_back(word);
//            }
//        }
//        for (const string& word : query.minus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            if (word_to_document_freqs_.at(word).count(document_id)) {
//                matched_words.clear();
//                break;
//            }
//        }
//        return { matched_words, documents_.at(document_id).status };
//    }
//
//private:
//    struct DocumentData {
//        int rating;
//        DocumentStatus status;
//    };
//    const set<string> stop_words_;
//    map<string, map<int, double>> word_to_document_freqs_;
//    map<int, DocumentData> documents_;
//    vector<int> document_ids_;
//
//    bool IsStopWord(const string& word) const {
//        return stop_words_.count(word) > 0;
//    }
//
//    static bool IsValidWord(const string& word) {
//        // A valid word must not contain special characters
//        return none_of(word.begin(), word.end(), [](char c) {
//            return c >= '\0' && c < ' ';
//            });
//    }
//
//    vector<string> SplitIntoWordsNoStop(const string& text) const {
//        vector<string> words;
//        for (const string& word : SplitIntoWords(text)) {
//            if (!IsValidWord(word)) {
//                throw invalid_argument("Word "s + word + " is invalid"s);
//            }
//            if (!IsStopWord(word)) {
//                words.push_back(word);
//            }
//        }
//        return words;
//    }
//
//    static int ComputeAverageRating(const vector<int>& ratings) {
//        if (ratings.empty()) {
//            return 0;
//        }
//        int rating_sum = 0;
//        for (const int rating : ratings) {
//            rating_sum += rating;
//        }
//        return rating_sum / static_cast<int>(ratings.size());
//    }
//
//    struct QueryWord {
//        string data;
//        bool is_minus;
//        bool is_stop;
//    };
//
//    QueryWord ParseQueryWord(const string& text) const {
//        if (text.empty()) {
//            throw invalid_argument("Query word is empty"s);
//        }
//        string word = text;
//        bool is_minus = false;
//        if (word[0] == '-') {
//            is_minus = true;
//            word = word.substr(1);
//        }
//        if (word.empty() || word[0] == '-' || !IsValidWord(word)) {
//            throw invalid_argument("Query word "s + text + " is invalid");
//        }
//
//        return { word, is_minus, IsStopWord(word) };
//    }
//
//    struct Query {
//        set<string> plus_words;
//        set<string> minus_words;
//    };
//
//    Query ParseQuery(const string& text) const {
//        Query result;
//        for (const string& word : SplitIntoWords(text)) {
//            const auto query_word = ParseQueryWord(word);
//            if (!query_word.is_stop) {
//                if (query_word.is_minus) {
//                    result.minus_words.insert(query_word.data);
//                }
//                else {
//                    result.plus_words.insert(query_word.data);
//                }
//            }
//        }
//        return result;
//    }
//
//    // Existence required
//    double ComputeWordInverseDocumentFreq(const string& word) const {
//        return log(GetDocumentCount() * 1.0 / word_to_document_freqs_.at(word).size());
//    }
//
//    template <typename DocumentPredicate>
//    vector<Document> FindAllDocuments(const Query& query,
//        DocumentPredicate document_predicate) const {
//        map<int, double> document_to_relevance;
//        for (const string& word : query.plus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            const double inverse_document_freq = ComputeWordInverseDocumentFreq(word);
//            for (const auto [document_id, term_freq] : word_to_document_freqs_.at(word)) {
//                const auto& document_data = documents_.at(document_id);
//                if (document_predicate(document_id, document_data.status, document_data.rating)) {
//                    document_to_relevance[document_id] += term_freq * inverse_document_freq;
//                }
//            }
//        }
//
//        for (const string& word : query.minus_words) {
//            if (word_to_document_freqs_.count(word) == 0) {
//                continue;
//            }
//            for (const auto [document_id, _] : word_to_document_freqs_.at(word)) {
//                document_to_relevance.erase(document_id);
//            }
//        }
//
//        vector<Document> matched_documents;
//        for (const auto [document_id, relevance] : document_to_relevance) {
//            matched_documents.push_back(
//                { document_id, relevance, documents_.at(document_id).rating });
//        }
//        return matched_documents;
//    }
//};
//template <typename It>
//class IteratorRange {
//public:
//    auto begin(It range_begin) {
//        begining = range_begin;
//    };
//    auto end(It range_end) {
//        ending = range_end;
//    };
//    auto size() {
//        return ending - beginig;
//    };
//private:
//    It begining;
//    It ending;
//};
//
//template <typename Iterator>
//class Paginator {
//
//private:
//    class IteratorRange {
//    public:
//        auto begin() {
//           
//        };
//        auto end() {
//            
//        };
//        auto size() {
//            return distance(begin, end - 1);
//        };
//    private:
//        It begining;
//        It ending;
//    };
//};
//
////template <typename Container>
////auto Paginate(const Container& c, size_t page_size) {
////    return Paginator(begin(c), end(c), page_size);
////}
//
//template<typename Iterator>
//ostream& operator <<(ostream& os, const IteratorRange& page) {
//    for (Iterator it = page.begin(); it != page.end(); ++it) {
//        os << "{ "s
//            << "document_id = "s << it->id << ", "s
//            << "relevance = "s << it->relevance << ", "s
//            << "rating = "s << it->rating << " }"s;
//    }
//    return os;
//}
//
//int main() {
//    SearchServer search_server("and with"s);
//    search_server.AddDocument(1, "funny pet and nasty rat"s, DocumentStatus::ACTUAL, { 7, 2, 7 });
//    search_server.AddDocument(2, "funny pet with curly hair"s, DocumentStatus::ACTUAL, { 1, 2, 3 });
//    search_server.AddDocument(3, "big cat nasty hair"s, DocumentStatus::ACTUAL, { 1, 2, 8 });
//    search_server.AddDocument(4, "big dog cat Vladislav"s, DocumentStatus::ACTUAL, { 1, 3, 2 });
//    search_server.AddDocument(5, "big dog hamster Borya"s, DocumentStatus::ACTUAL, { 1, 1, 1 });
//    const auto search_results = search_server.FindTopDocuments("curly dog"s);
//    int page_size = 2;
//    const auto pages = Paginate(search_results, page_size);
//    // Выводим найденные документы по страницам
//    for (auto page = pages.begin(); page != pages.end(); ++page) {
//        cout << *page << endl;
//        cout << "Page break"s << endl;
//    }
//}
#include <iostream>
#include <vector>

using namespace std;
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << " "s;
//    }
//    cout << endl;
//}
//
//template <typename Type>
//class Stack {
//public:
//    void Push(const Type& element) {
//        elements_.push_back(element);
//    }
//    void Pop() {
//        elements_.remove(elements_.begin(), elements_.end(), elements_[-1]);
//    }
//    const Type& Peek() const {
//        return elements_[elements_.size() - 1];
//    }
//    Type& Peek() {
//        // напишите реализацию
//    }
//    void Print() const {
//        PrintRange(elements_.begin(), elements_.end());
//    }
//    uint64_t Size() const {
//        return elements_.size();
//    }
//    bool IsEmpty() const {
//        if (elements_.empty()) {
//            return true;
//        }
//        return false;
//    }
//
//private:
//    vector<Type> elements_;
//};
//
//int main() {
//    Stack<int> stack;
//    for (uint32_t i = 0; i < 10; ++i) {
//        stack.Push(i);
//        stack.Print();
//    }
//    while (!stack.IsEmpty()) {
//        stack.Pop();
//        stack.Print();
//    }
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <iomanip>
//#include <iostream>
//#include <list>
//#include <numeric>
//#include <random>
//#include <vector>
//#include <map>
//
//
//using namespace std;
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << " "s;
//    }
//    cout << endl;
//}
//
//template <typename Type>
//class Stack {
//public:
//    void Push(const Type& element) {
//        elements_.push_back(element);
//    }
//    void Pop() {
//        elements_.pop_back();
//    }
//    const Type& Peek() const {
//        return elements_[static_cast<int>(elements_.size()) - 1];
//    }
//    Type& Peek() {
//        return elements_[static_cast<int>(elements_.size()) - 1];
//
//    }
//    void Print() const {
//        bool isFirst = true;
//        for (const auto& elem : elements_) {
//            if (isFirst) {
//                cout << elem;
//                isFirst = false;
//            }
//            else {
//                cout << " " << elem;
//            }
//        }
//        cout << endl;
//    }
//    uint64_t Size() const {
//        return static_cast<uint64_t>(elements_.size());
//    }
//    bool IsEmpty() const {
//        return elements_.empty();
//    }
//
//private:
//    vector<Type> elements_;
//};
//
//
//
//template <typename Type>
//class StackMin {
//public:
//    void Push(const Type& element) {
//
//        elements_.Push(element);
//
//        min_elements_[element].push_back(elements_.Peek());
//    }
//    void Pop() {
//        auto elem = elements_.Peek();
//        min_elements_[elem].pop_back();
//        if (min_elements_[elem].size() == 0) {
//            min_elements_.erase(elem);
//        }
//        elements_.Pop();
//
//    }
//    const Type& Peek() const {
//        return elements_.Peek();
//    }
//    Type& Peek() {
//        return elements_.Peek();
//    }
//    void Print() const {
//        // работу этого метода мы проверять не будем,
//        // но если он вам нужен, то можете его реализовать
//        elements_.Print();
//    }
//    uint64_t Size() const {
//        return elements_.size();
//    }
//    bool IsEmpty() const {
//        return elements_.IsEmpty();
//    }
//    const Type& PeekMin() const {
//
//        const auto  min = *min_elements_.begin();
//
//        return min_elements_.at(min.first).front();
//        // напишите реализацию метода
//    }
//    Type& PeekMin() {
//        const auto min = *min_elements_.begin();
//
//        return min_elements_[min.first].front();
//    }
//
//private:
//    Stack<Type> elements_;
//    map<Type, vector<Type>> min_elements_;
//
//    // возможно, здесь вам понадобится что-то изменить
//};
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <iomanip>
//#include <iostream>
//#include <list>
//#include <numeric>
//#include <random>
//#include <vector>
//#include <map>
//
//
//using namespace std;
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << " "s;
//    }
//    cout << endl;
//}
//
//template <typename Type>
//class Stack {
//public:
//    void Push(const Type& element) {
//        elements_.push_back(element);
//    }
//    void Pop() {
//        elements_.pop_back();
//    }
//    const Type& Peek() const {
//        return elements_[static_cast<int>(elements_.size()) - 1];
//    }
//    Type& Peek() {
//        return elements_[static_cast<int>(elements_.size()) - 1];
//
//    }
//    void Print() const {
//        bool isFirst = true;
//        for (const auto& elem : elements_) {
//            if (isFirst) {
//                cout << elem;
//                isFirst = false;
//            }
//            else {
//                cout << " " << elem;
//            }
//        }
//        cout << endl;
//    }
//    uint64_t Size() const {
//        return static_cast<uint64_t>(elements_.size());
//    }
//    bool IsEmpty() const {
//        return elements_.empty();
//    }
//
//private:
//    vector<Type> elements_;
//};
//
//
//
//template <typename Type>
//class StackMin {
//public:
//    void Push(const Type& element) {
//
//        elements_.Push(element);
//
//        min_elements_[element].push_back(elements_.Peek());
//    }
//    void Pop() {
//        auto elem = elements_.Peek();
//        min_elements_[elem].pop_back();
//        if (min_elements_[elem].size() == 0) {
//            min_elements_.erase(elem);
//        }
//        elements_.Pop();
//
//    }
//    const Type& Peek() const {
//        return elements_.Peek();
//    }
//    Type& Peek() {
//        return elements_.Peek();
//    }
//    void Print() const {
//        // работу этого метода мы проверять не будем,
//        // но если он вам нужен, то можете его реализовать
//        elements_.Print();
//    }
//    uint64_t Size() const {
//        return elements_.size();
//    }
//    bool IsEmpty() const {
//        return elements_.IsEmpty();
//    }
//    const Type& PeekMin() const {
//
//        const auto  min = *min_elements_.begin();
//
//        return min_elements_.at(min.first).front();
//        // напишите реализацию метода
//    }
//    Type& PeekMin() {
//        const auto min = *min_elements_.begin();
//
//        return min_elements_[min.first].front();
//    }
//
//private:
//    Stack<Type> elements_;
//    map<Type, vector<Type>> min_elements_;
//
//    // возможно, здесь вам понадобится что-то изменить
//};
//
//template <typename Type>
//class SortedSack {
//public:
//    void Push(const Type& element) {
//        while (elements_.size() != 5) {
//            if (elements_[-1] < element) {
//                a = elements_[-1];
//                elements_[-1] = element;
//                elements_.push_back(a);
//            }
//            else {
//                elements_.push_back(element);
//            }
//        }
//    }
//    const Type& Peek() const {
//        return elements_.[elements_.size() - 1];
//    }
//    Type& Peek() {
//        return elements_.[elements_.size() - 1];
//    }
//    void Print() const {
//        Print(elements_.begin(), elements.end());
//    }
//    uint64_t Size() const {
//        return elements_.size();
//    }
//    bool IsEmpty() const {
//        return elements_.empty();
//    }
//private:
//    vector<Type> elements_;
//    int a;
//};
//
//int main() {
//    SortedSack<int> sack;
//    vector<int> values(5);
//    // заполняем вектор для тестирования нашего класса
//    iota(values.begin(), values.end(), 1);
//    // перемешиваем значения
//    random_shuffle(values.begin(), values.end());
//
//    // заполняем класс и проверяем, что сортировка сохраняется после каждой вставки
//    for (int i = 0; i < 5; ++i) {
//        cout << "Вставляемый элемент = "s << values[i] << endl;
//        sack.Push(values[i]);
//        sack.Print();
//    }
//}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <iomanip>
//#include <iostream>
//#include <list>
//#include <numeric>
//#include <random>
//#include <vector>
//#include <map>
//
//
//using namespace std;
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << " "s;
//    }
//    cout << endl;
//}
//
//
//template <typename Type>
//class SortedSack {
//public:
//    void Push(const Type& element) {
//        if (elements_.size() == 0) {
//            elements_.push_back(element);
//        }
//        else {
//            if (elements_[-i] < element) {
//                while (elements_[-i] < element) {
//                    if (elements_[-i] < element) {
//                        a = elements_[-i];
//                        elements_[-i] = element;
//                        elements_.push_back(a);
//                        i += 2;
//                    }
//                }
//            }
//            else {
//                elements_.push_back(element);
//            }
//        }
//    }
//    const Type& Peek() const {
//        return elements_[elements_.size() - 1];
//    }
//    Type& Peek() {
//        return elements_[elements_.size() - 1];
//    }
//    void Print() const {
//        PrintRange(elements_.begin(), elements_.end());
//    }
//    uint64_t Size() const {
//        return elements_.size();
//    }
//    bool IsEmpty() const {
//        return elements_.empty();
//    }
//private:
//    vector<Type> elements_;
//    Type a;
//    int i = 1;
//};
//
//int main() {
//    SortedSack<int> sack;
//    vector<int> values(5);
//    // заполняем вектор для тестирования нашего класса
//    iota(values.begin(), values.end(), 1);
//    // перемешиваем значения
//    random_shuffle(values.begin(), values.end());
//
//    // заполняем класс и проверяем, что сортировка сохраняется после каждой вставки
//    for (int i = 0; i < 5; ++i) {
//        cout << "Вставляемый элемент = "s << values[i] << endl;
//        sack.Push(values[i]);
//        sack.Print();
//    }
//}

#include <stack>
#include <deque>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <vector>

//using namespace std;
//
//template <typename It>
//void PrintRange(It range_begin, It range_end) {
//    for (auto it = range_begin; it != range_end; ++it) {
//        cout << *it << " "s;
//    }
//    cout << endl;
//}
//
//template <typename Type>
//class Queue {
//public:
//    void Push(const Type& element) {
//        stack1_.push(element);
//    }
//    void Pop() {
//        stack1_.pop();
//    }
//    Type& Front() {
//        return stack1_.top();
//
//    }
//    uint64_t Size() const {
//        return stack1_.size();
//    }
//    bool IsEmpty() const {
//        return stack1_.empty();
//    }
//
//
//private:
//    stack<Type> stack1_;
//    stack<Type> stack2_;
//};
//
//template<typename Type>
//void Queue<Type>::Push(const Type& element) {
//    while (!stack1_.empty()) {
//        stack2_.push(stack1_.top());
//        stack1_.pop();
//    }
//    stack1_.push(element);
//}
//
//int main() {
//    Queue<int> queue;
//    vector<int> values(5);
//    // заполняем вектор для тестирования очереди
//    iota(values.begin(), values.end(), 1);
//    // перемешиваем значения
//    random_shuffle(values.begin(), values.end());
//    PrintRange(values.begin(), values.end());
//    cout << "Заполняем очередь"s << endl;
//    // заполняем очередь и выводим элемент в начале очереди
//    for (int i = 0; i < 5; ++i) {
//        queue.Push(values[i]);
//        cout << "Вставленный элемент "s << values[i] << endl;
//        cout << "Первый элемент очереди "s << queue.Front() << endl;
//    }
//    cout << "Вынимаем элементы из очереди"s << endl;
//    // выводим элемент в начале очереди и вытаскиваем элементы по одному
//    while (!queue.IsEmpty()) {
//        // сначала будем проверять начальный элемент, а потом вытаскивать,
//        // так как операция Front на пустой очереди не определена
//        cout << "Будем вынимать элемент "s << queue.Front() << endl;
//        queue.Pop();
//    }
//    return 0;
//}
//#include "painter.cpp"
//#include <iostream>
//#include <utility>
//
//using namespace std;
//
//ostream& operator<<(ostream& os, Wall::Color color) {
//    string str[] = { "BLUE", "GREEN", "RED" , "WHITE" , "YELLOW"};
//    os << str[static_cast<int>(color)];
//    return os;
//}
//
//int main() {
//    Painter bill;
//    Wall wall(3.5, 2.45);
//    const auto s = bill.Paint(wall,Wall::Color::BLUE);
//    cout << wall.GetColor() << endl;
//    cout << s.first << " " << s.second;
//}


//#include <chrono>
//#include <cstdlib>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include "wall.h"
//using namespace std;
//
//vector<int> ReverseVector(const vector<int>& source_vector) {
//
//    vector <int>  res;
//
//    res = source_vector;
//
//    reverse(res.begin(), res.end());
//
//    return res;
//}
//
//int CountPops(const vector<int>& source_vector, int begin, int end) {
//    int res = 0;
//
//    for (int i = begin; i < end; ++i) {
//        if (source_vector[i]) {
//            ++res;
//        }
//    }
//
//    return res;
//}
//
//void AppendRandom(vector<int>& v, int n) {
//    v.reserve(n);
//    for (int i = 0; i < n; ++i) {
//        // получаем случайное число с помощью функции rand.
//        // в C++ имеются более современные генераторы случайных чисел,
//        // но в данном уроке не будем их касаться
//        v.push_back(rand() % 2);
//    }
//}
//
//void Operate() {
//    LOG_DURATION("Total"s);
//
//    vector<int> random_bits;
//
//    // операции << для целых чисел это сдвиг всех бит в двоичной
//    // записи числа. Запишем с её помощью число 2 в степени 17 (131072)
//    static const int N = 1 << 17;
//
//    // заполним вектор случайными числами 0 и 1
//
//    {
//        LOG_DURATION("Append random"s);
//        AppendRandom(random_bits, N);
//    }
//
//    // перевернём вектор задом наперёд
//    vector<int> reversed_bits;
//    {
//        LOG_DURATION("Reverse"s);
//
//        reversed_bits = ReverseVector(random_bits);
//    }
//
//    {
//        LOG_DURATION("Counting"s);
//        // посчитаем процент единиц на начальных отрезках вектора
//        for (int i = 1, step = 1; i <= N; i += step, step *= 2) {
//            double rate = CountPops(reversed_bits, 0, i) * 100. / i;
//            cout << "After "s << i << " bits we found "s << rate << "% pops"s << endl;
//        }
//    }
//}
//
//int main() {
//    Operate();
//}

//#include "wall.h"
//
//#include <iostream>
//#include <numeric>
//#include <random>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<float> ComputeAvgTemp(const vector<vector<float>>& measures) {
//    // место для вашего решения
//    if (measures.empty()) return {};
//    vector<float>size;
//    vector<float>sum;
//    // место для вашего решения
//    int i = 0;
//    for (auto a : measures) {
//        float it = accumulate(a.begin(), a.end(), 0.0) / a.size();
//        sum.push_back((it > 0 ? it : 0.0));
//        i += 1;
//    }
//    return sum;
//}
//
//vector<float> GetRandomVector(int size) {
//    static mt19937 engine;
//    uniform_real_distribution<float> d(-100, 100);
//
//    vector<float> res(size);
//    for (int i = 0; i < size; ++i) {
//        res[i] = d(engine);
//    }
//
//    return res;
//}
//
//int main() {
//    vector<vector<float>> data;
//    data.reserve(5000);
//
//    for (int i = 0; i < 5000; ++i) {
//        data.push_back(GetRandomVector(5000));
//    }
//
//    vector<float> avg;
//    {
//        LOG_DURATION("ComputeAvgTemp"s);
//        avg = ComputeAvgTemp(data);
//    }
//
//    cout << "Total mean: "s << accumulate(avg.begin(), avg.end(), 0.f) / avg.size() << endl;
//}

//#include <algorithm>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//struct Ticket {
//    int id;
//    string name;
//};
//
//class TicketOffice {
//public:
//    // добавить билет в систему
//    void PushTicket(const string& name) {
//        // реализуйте метод
//        tickets_.emplace_back(last_id_, name);
//        last_id_++;
//        
//    }
//    // получить количество доступных билетов
//    int GetAvailable() const {
//        // реализуйте метод
//        int a = static_cast<int>(tickets_.size());
//        return a;
//    }
//
//    // получить количество доступных билетов определённого типа
//    int GetAvailable(const string& name) const {
//        // реализуйте метод
//        int count = 0;
//        for (auto& a : tickets_) {
//            if (a.name == name) {
//                count++;
//            }
//        }
//        return count;
//    }
//
//    // отозвать старые билеты (до определённого id)
//    void Invalidate(int minimum) {
//        // реализуйте метод
//        int n = minimum;
//        while (n != 0) {
//            tickets_.pop_front();
//            for (auto& a : tickets_) {
//                a.id--;
//            }
//            n--;
//        }
//
//    }
//
//private:
//    int last_id_ = 0;
//    deque<Ticket> tickets_;
//};
//
//int main() {
//    TicketOffice tickets;
//
//    tickets.PushTicket("Swan Lake"); // id - 0
//    tickets.PushTicket("Swan Lake"); // id - 1
//    tickets.PushTicket("Boris Godunov"); // id - 2
//    tickets.PushTicket("Boris Godunov"); // id - 3
//    tickets.PushTicket("Swan Lake"); // id - 4
//    tickets.PushTicket("Boris Godunov"); // id - 5
//    tickets.PushTicket("Boris Godunov"); // id - 6
//
//    cout << tickets.GetAvailable() << endl; // Вывод: 7
//    cout << tickets.GetAvailable("Swan Lake") << endl; // Вывод: 3
//    cout << tickets.GetAvailable("Boris Godunov") << endl; // Вывод: 4
//
//    // Invalidate удалит билеты с номерами 0, 1, 2:
//    tickets.Invalidate(3);
//
//    cout << tickets.GetAvailable() << endl; // Вывод: 4
//    cout << tickets.GetAvailable("Swan Lake") << endl; // Вывод: 1
//    cout << tickets.GetAvailable("Boris Godunov") << endl; // Вывод: 3
//
//    tickets.PushTicket("Swan Lake"); // id - 7
//    tickets.PushTicket("Swan Lake"); // id - 8
//
//    cout << tickets.GetAvailable("Swan Lake") << endl; // Вывод: 3
//}

//#include <cassert>
//#include <string>
//
//// Шаблонная функция Swap обменивает значения двух объектов одного и того же типа,
//// указатели на которые она принимает в качестве аргументов
//template <typename T>
//void Swap(T* value1, T* value2) {
//    T a = *value1;
//    T b = *value2;
//    *value2 = a;
//    *value1= b;
//    cout << *value1 << " " << *value2;
//}
//
//int main() {
//    using namespace std;
//    int x = 5;
//    int y = 6;
//    Swap(&x, &y);
//    return 0;
//}

//#include <cassert>
//#include <string>
//
//template <typename T>
//bool IsSameObject(T& a, T& b) {
//    /*Напишите тело функции самостоятельно */
//    if (&a == &b) {
//        return true;
//    }
//    return false;
//}
//
//int main() {
//    using namespace std;
//
//    const int x = 1;
//    const int y = 1;
//    // x и y — разные объекты, хоть и имеющие одинаковое значение
//    assert(!IsSameObject(x, y));
//    // Оба аргумента — один и тот же объект
//    assert(IsSameObject(x, x));
//
//}

//#include <algorithm>
//#include <cassert>
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//// Породы кошек
//enum class CatBreed {
//    Bengal,
//    Balinese,
//    Persian,
//    Siamese,
//    Siberian,
//    Sphynx, SuccessSuccess
//};
//
//// Пол
//enum class Gender {
//    Male,
//    Female,
//};
//
//struct Cat {
//    string name;
//    Gender gender;
//    CatBreed breed;
//    int age;
//};
//
//string CatBreedToString(CatBreed breed) {
//    switch (breed) {
//    case CatBreed::Bengal:
//        return "Bengal"s;
//    case CatBreed::Balinese:
//        return "Balinese"s;
//    case CatBreed::Persian:
//        return "Persian"s;
//    case CatBreed::Siamese:
//        return "Siamese"s;
//    case CatBreed::Siberian:
//        return "Siberian";
//    case CatBreed::Sphynx:
//        return "Sphynx"s;
//    default:
//        throw invalid_argument("Invalid cat breed"s);
//    }
//}
//
//ostream& operator<<(ostream& out, CatBreed breed) {
//    out << CatBreedToString(breed);
//    return out;
//}
//
//ostream& operator<<(ostream& out, Gender gender) {
//    out << (gender == Gender::Male ? "male"s : "female"s);
//    return out;
//}
//
//ostream& operator<<(ostream& out, const Cat& cat) {
//    out << '{' << cat.name << ", "s << cat.gender;
//    out << ", breed: "s << cat.breed << ", age:"s << cat.age << '}';
//    return out;
//}
//
//// Возвращает массив указателей на элементы вектора cats, отсортированные с использованием
//// компаратора comp. Компаратор comp - функция, принимающая два аргумента типа const Cat&
//// и возвращающая true, если значения упорядочены, и false в ином случае
//template <typename Comparator>
//vector<const Cat*> GetSortedCats(const vector<Cat>& cats, const Comparator& comp) {
//    vector<const Cat*> sorted_cat_pointers;
//    for (const Cat& a : cats) {
//        sorted_cat_pointers.push_back(&a);
//    }
//    sort(sorted_cat_pointers.begin(), sorted_cat_pointers.end(), [comp](const Cat* lhs, const Cat* rhs) {
//        // Чтобы сравнить значения, надо разыменовать указатели
//        return comp(*lhs,*rhs);
//        });
//    /*
//    Напишите тело функции самостоятельно. Подсказка:
//    1) Поместите в массив sorted_cat_pointers адреса объектов из массива cats.
//    2) Отсортируйте массив sorted_cat_pointers с помощью переданного компаратора comp.
//       Так как comp сравнивает ссылки на объекты, а отсортировать нужно указатели,
//       передайте в sort лямбда функцию, принимающую указатели и сравнивающую объекты
//       при помощи компаратора comp:
//       [comp](const Cat* lhs, const Cat* rhs) {
//           return comp(*lhs, *rhs);
//       }
//    */
//    return sorted_cat_pointers;
//}
//
//// Выводит в поток out значения объектов, на который ссылаются указатели вектора cat_pointers.
//// Пример вывода элементов vector<const Cat*>:
//// {{Tom, male, breed: Bengal, age:2}, {Charlie, male, breed: Balinese, age:7}}
//void PrintCatPointerValues(const vector<const Cat*>& cat_pointers, ostream& out) {
//    for (auto& a : cat_pointers) {
//        out << *a << ", ";
//    }
//}
//
//int main() {
//    const vector<Cat> cats = {
//        {"Tom"s, Gender::Male, CatBreed::Bengal, 2},
//        {"Leo"s, Gender::Male, CatBreed::Siberian, 3},
//        {"Luna"s, Gender::Female, CatBreed::Siamese, 1},
//        {"Charlie"s, Gender::Male, CatBreed::Balinese, 7},
//        {"Ginger"s, Gender::Female, CatBreed::Sphynx, 5},
//        {"Tom"s, Gender::Male, CatBreed::Siamese, 2},
//    };
//
//    {
//        auto sorted_cats = GetSortedCats(cats, [](const Cat& lhs, const Cat& rhs) {
//            return tie(lhs.breed, lhs.name) < tie(rhs.breed, rhs.name);
//            });
//
//        cout << "Cats sorted by breed and name:"s << endl;
//        PrintCatPointerValues(sorted_cats, cout);
//        cout << endl;
//    }
//
//    {
//        auto sorted_cats = GetSortedCats(cats, [](const Cat& lhs, const Cat& rhs) {
//            return tie(lhs.gender, lhs.breed) < tie(rhs.gender, rhs.breed);
//            });
//
//        cout << "Cats sorted by gender and breed:"s << endl;
//        PrintCatPointerValues(sorted_cats, cout);
//        cout << endl;
//    }
//    return 0;
//}

#include <iostream>

using namespace std;

//// Функция для рекурсивного вычисления факториала:
//// 0! = 1
//// n! = n*(n-1)!
//int Factorial(int n) {
//    cout << "  Factorial("s << n << "): &n="s << &n << endl;
//    return n > 0 ? n * Factorial(n - 1) : 1;
//}
//
//int main() {
//    for (int i = 0; i < 4; ++i) {
//        cout << "=== Calculating factorial of "s << i << " ==="s << endl;
//        int f = Factorial(i);
//        cout << "Result is: "s << f << endl << endl;
//    }
//}

//int speed = 12;
//
//int Run(int time) {
//    int distance = speed * time;
//    speed /= 2;
//    return distance;
//}
//
//int main() {
//    int distance = Run(10) + Run(10) + Run(10);
//    cout << distance;
//}

#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

//template <typename T>
//class PtrVector {
//public:
//    PtrVector() = default;
//
//    // Создаёт вектор указателей на копии объектов из other
//    PtrVector(const PtrVector& other) {
//        // Реализуйте копирующий конструктор самостоятельно
//        items_ = other.items_;
//    }
//
//    // Деструктор удаляет объекты в куче, на которые ссылаются указатели,
//    // в векторе items_
//    ~PtrVector() {
//        delete items_;
//    }
//
//    // Возвращает ссылку на вектор указателей
//    vector<T*>& GetItems() noexcept {
//        return items_;
//    }
//
//    // Возвращает константную ссылку на вектор указателей
//    vector<T*> const& GetItems() const noexcept {
//        return items_;
//    }
//
//private:
//    vector<T*> items_;
//};
//
//// Эта функция main тестирует шаблон класса PtrVector
//int main() {
//    // Вспомогательный "шпион", позволяющий узнать о своём удалении
//    struct DeletionSpy {
//        explicit DeletionSpy(bool& is_deleted)
//            : is_deleted_(is_deleted) {
//        }
//        ~DeletionSpy() {
//            is_deleted_ = true;
//        }
//        bool& is_deleted_;
//    };
//
//    // Проверяем удаление элементов
//    {
//        bool spy1_is_deleted = false;
//        DeletionSpy* ptr1 = new DeletionSpy(spy1_is_deleted);
//        {
//            PtrVector<DeletionSpy> ptr_vector;
//            ptr_vector.GetItems().push_back(ptr1);
//            assert(!spy1_is_deleted);
//
//            // Константная ссылка на ptr_vector
//            const auto& const_ptr_vector_ref(ptr_vector);
//            // И константная, и неконстантная версия GetItems
//            // должны вернуть ссылку на один и тот же вектор
//            assert(&const_ptr_vector_ref.GetItems() == &ptr_vector.GetItems());
//        }
//        // При разрушении ptr_vector должен удалить все объекты, на которые
//        // ссылаются находящиеся внутри него указателели
//        assert(spy1_is_deleted);
//    }
//
//    // Вспомогательный «шпион», позволяющий узнать о своём копировании
//    struct CopyingSpy {
//        explicit CopyingSpy(int& copy_count)
//            : copy_count_(copy_count) {
//        }
//        CopyingSpy(const CopyingSpy& rhs)
//            : copy_count_(rhs.copy_count_)  //
//        {
//            ++copy_count_;
//        }
//        int& copy_count_;
//    };
//
//    // Проверяем копирование элементов при копировании массива указателей
//    {
//        // 10 элементов
//        vector<int> copy_counters(10);
//
//        PtrVector<CopyingSpy> ptr_vector;
//        // Подготавливаем оригинальный массив указателей
//        for (auto& counter : copy_counters) {
//            ptr_vector.GetItems().push_back(new CopyingSpy(counter));
//        }
//        // Последний элемент содержит нулевой указатель
//        ptr_vector.GetItems().push_back(nullptr);
//
//        auto ptr_vector_copy(ptr_vector);
//        // Количество элементов в копии равно количеству элементов оригинального вектора
//        assert(ptr_vector_copy.GetItems().size() == ptr_vector.GetItems().size());
//
//        // копия должна хранить указатели на новые объекты
//        assert(ptr_vector_copy.GetItems() != ptr_vector.GetItems());
//        // Последний элемент исходного массива и его копии - нулевой указатель
//        assert(ptr_vector_copy.GetItems().back() == nullptr);
//        // Проверяем, что элементы были скопированы (копирующие шпионы увеличивают счётчики копий).
//        assert(all_of(copy_counters.begin(), copy_counters.end(), [](int counter) {
//            return counter == 1;
//            }));
//    }
//}
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

// функция выводит элементы контейнера через запятую
//template <typename It>
//void PrintRangeComma(It range_begin, It range_end) {
//    if (range_begin == range_end) {
//        return;
//    }
//    for (auto it = range_begin; it != range_end; it++) {
//        cout << *it;
//        //if (it++ == range_end) {
//            //break;
//       // }
//        if (it++ != range_end) {
//            cout << ", "s;
//        }
//    }
//    cout << endl;
//}
//
//template <typename RandomIt>
//void MergeSort(RandomIt range_begin, RandomIt range_end) {
//    // 1. Если диапазон содержит меньше 2 элементов, выходим из функции
//    int range_length = range_end - range_begin;
//    if (range_length < 2) {
//        return;
//    }
//
//    // 2. Создаём вектор, содержащий все элементы текущего диапазона
//    vector<typename RandomIt::value_type> elements(range_begin, range_end);
//
//    // 3. Разбиваем вектор на две равные части
//    auto mid = elements.size() / 2;
//
//    // 4. Вызываем функцию MergeSort от каждой половины вектора
//    MergeSort(elements.begin(), mid);
//    MergeSort(mid, elements.end());
//
//    // 5. С помощью алгоритма merge сливаем отсортированные половины
//    // в исходный диапазон
//    // merge -> http://ru.cppreference.com/w/cpp/algorithm/merge
//    merge(elements.begin(), elements.end(), mid, mid, range_begin);
//}
//
//int main() {
//    vector<int> test_vector(10);
//
//    // iota             -> http://ru.cppreference.com/w/cpp/algorithm/iota
//    // Заполняет диапазон последовательно возрастающими значениями
//    iota(test_vector.begin(), test_vector.end(), 1);
//
//    // random_shuffle   -> https://ru.cppreference.com/w/cpp/algorithm/random_shuffle
//    // Перемешивает элементы в случайном порядке
//    random_shuffle(test_vector.begin(), test_vector.end());
//
//    // Выводим вектор до сортировки
//    PrintRangeComma(test_vector.begin(), test_vector.end());
//
//    // Сортируем вектор с помощью сортировки слиянием
//    MergeSort(test_vector.begin(), test_vector.end());
//
//    // Выводим результат
//    PrintRangeComma(test_vector.begin(), test_vector.end());
//
//    return 0;
//}
#include <iostream>
#include <vector>
////
////class MoneyBox {
////public:
////    explicit MoneyBox(vector<int64_t> nominals)
////        : nominals_(move(nominals))
////        , counts_(nominals_.size()) {
////    }
////
////    const vector<int>& GetCounts() const {
////        return counts_;
////    }
////
////    void PushCoin(int64_t value) {
////        ++counts_[FindIndex(value)];
////    }
////
////    void PrintCoins(ostream& out) const {
////        for (int i = 0; i < counts_.size(); ++i) {
////            if (counts_[i] > 0) {
////                out << nominals_[i] << ': 's << counts_[i] << endl;
////            }
////        }
////    }
////
////    int FindIndex(int val) {
////        return static_cast<int>(find(nominals_.begin(), nominals_.end(), val) - nominals_.begin());
////    }
////
////
////    //ostream& operator<<(ostream& os, const Cat& cat) {
////    //return os <<'{' << cat.breed << ', 's << cat.name << ', 's << cat.age << '}';
//////}
////
////private:
////    const vector<int64_t> nominals_;
////    vector<int> counts_;
////};
////
////ostream& operator<<(ostream& out, const MoneyBox& cash) {
////    cash.PrintCoins(out);
////    return out;
////}
////
////int main() {
////    MoneyBox cash({ 10, 50, 100, 200, 500, 1000, 2000, 5000 });
////
////    int times;
////    cout << 'Enter number of coins you have:'s << endl;
////    cin >> times;
////
////    cout << 'Enter all nominals:'s << endl;
////    for (int i = 0; i < times; ++i) {
////        int64_t value;
////        cin >> value;
////        cash.PushCoin(value);
////    }
////
////    cout << cash << endl;
////}
//
//#include <array>
//#include <cassert>
//#include <iomanip>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <tuple>
//#include <unordered_map>
//#include <vector>
//
//using namespace std;
//
//class VehiclePlate {
//private:
//    auto AsTuple() const {
//        return tie(letters_, digits_, region_);
//    }
//
//public:
//    bool operator==(const VehiclePlate& other) const {
//        return AsTuple() == other.AsTuple();
//    }
//
//    VehiclePlate(char l0, char l1, int digits, char l2, int region)
//        : letters_{ l0, l1, l2 }
//        , digits_(digits)
//        , region_(region) {
//    }
//
//    string ToString() const {
//        ostringstream out;
//        out << letters_[0] << letters_[1];
//
//        // чтобы дополнить цифровую часть номера слева нулями
//        // до трёх цифр, используем подобные манипуляторы:
//        // setfill задаёт символ для заполнения,
//        // right задаёт выравнивание по правому краю,
//        // setw задаёт минимальное желаемое количество знаков
//        out << setfill('0') << right << setw(3) << digits_;
//        out << letters_[2] << setw(2) << region_;
//
//        return out.str();
//    }
//
//    int Hash() const {
//        return digits_;
//    }
//
//private:
//    array<char, 3> letters_;
//    int digits_;
//    int region_;
//};
//
//ostream& operator<<(ostream& out, VehiclePlate plate) {
//    out << plate.ToString();
//    return out;
//}
//
//class VehiclePlateHasher {
//public:
//    size_t operator()(const VehiclePlate& plate) const {
//        // измените эту функцию, чтобы она учитывала все данные номера
//        // рекомендуется использовать метод ToString() и существующий 
//        // класс hash<string>
//        return static_cast<size_t>(hasher_(plate.ToString()));
//    }
//private:
//    hash<string> hasher_;
//};
//
//class ParkingCounter {
//public:
//    // зарегистрировать парковку автомобиля
//    void Park(VehiclePlate car) {
//        ++car_to_parks_[car];
//    }
//
//    // метод возвращает количество зарегистрированных 
//    // парковок автомобиля
//    int GetCount(const VehiclePlate& car) const {
//        auto s = car_to_parks_.find(car);
//        if (car_to_parks_.end() != s) {
//            return car_to_parks_.at(car);
//        }
//        else {
//            return {};
//        }
//    }
//
//    auto& GetAllData() const {
//        return car_to_parks_;
//    }
//
//private:
//    // для хранения данных используйте контейнер unordered_map
//    // назовите поле класса car_to_parks_
//    unordered_map<VehiclePlate, int, VehiclePlateHasher> car_to_parks_;
//};
//
//int main() {
//    ParkingCounter parking;
//
//    parking.Park({ 'B', 'H', 840, 'E', 99 });
//    parking.Park({ 'O', 'K', 942, 'K', 78 });
//    parking.Park({ 'O', 'K', 942, 'K', 78 });
//    parking.Park({ 'O', 'K', 942, 'K', 78 });
//    parking.Park({ 'O', 'K', 942, 'K', 78 });
//    parking.Park({ 'H', 'E', 968, 'C', 79 });
//    parking.Park({ 'T', 'A', 326, 'X', 83 });
//    parking.Park({ 'H', 'H', 831, 'P', 116 });
//    parking.Park({ 'A', 'P', 831, 'Y', 99 });
//    parking.Park({ 'P', 'M', 884, 'K', 23 });
//    parking.Park({ 'O', 'C', 34, 'P', 24 });
//    parking.Park({ 'M', 'Y', 831, 'M', 43 });
//    parking.Park({ 'B', 'P', 831, 'M', 79 });
//    parking.Park({ 'O', 'K', 942, 'K', 78 });
//    parking.Park({ 'K', 'T', 478, 'P', 49 });
//    parking.Park({ 'X', 'P', 850, 'A', 50 });
//
//    assert(parking.GetCount({ 'O', 'K', 942, 'K', 78 }) == 5);
//    assert(parking.GetCount({ 'A', 'B', 111, 'C', 99 }) == 0);
//
//    for (const auto& [plate, count] : parking.GetAllData()) {
//        cout << plate << ' 's << count << endl;
//    }
//}

//ImplementStr

//int main()
//{
//	string haystack = "sadbutsad", needle = "sad";
//	int j = 0;
//	int flag = 0;
//	for (int i = 0; i < haystack.length(); i++) {
//		if (haystack[i] == needle[j]) {
//			if (j == needle.length() - 1) {
//				cout << i - j + 1;
//				break;
//			}
//			j++;
//			flag += 1;
//		}
//		else {
//			j = 0;
//			if (haystack[i] == needle[j]) {
//				j++;
//				flag += 1;
//			}
//		}
//	}
//	if (flag == 0) {
//		cout << -1;
//	}
//}
#include <algorithm>
using namespace std;
//int main() {
//    int count = 0;
//    vector<string> strs = { "flower", "flow", "flight" };
//    string str = "flow";
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < strs.size(); j++) {
//            if (strs[j][i] != str[i]) {
//                cout << str.substr(0, count);
//            }
//        }
//        count++;
//    }
//}

//int Fib(int a) {
//    int sum;
//    if (a <= 2) {
//        return a;
//    }
//    sum = Fib(a-2) + Fib(a - 1);
//    return sum;
//}
//
//int main() {
//    cout << Fib(5);
//}

//int main() {
//    vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
//    //int max_left;
//    //int max_rigth;
//    //int left;
//    //int rigth;
//    //if (nums.size() % 2 != 0) {
//    //    int middle = nums[nums.size() % 2];
//    //    for (int i = 5,int j = 4; i < nums.size() / 2 - 1; i++, j--) {
//    //        left = left + nums[i];
//    //        rigth = rigth + nums[i];
//    //        if (left > max_left) {
//    //            max_left = left;
//    //        }
//    //        if (rigth > max_rigth) {
//    //            max_rigth = rigth;
//    //        }
//    //    }
//
//    //}\
//
//    int ans = nums[0], f = nums[0];
//    for (int i = 1; i < nums.size(); ++i) {
//        f = max(f, 0) + nums[i];
//        ans = max(ans, f);
//    }
//    cout << ans;
//}

//void IfInt(int a, int b) {
//    if (a % b != 2)
//}


//Нахождение простых чисел в промежутке 0..n


//int main() {
//
//    int n = 10000000;
//    vector<int> a = {0,0};
//    for (int i = 2; i <= n; i++) {
//        a.push_back(1);
//    }
//
//    for (int k = 2; k*k <= n; k++) {
//        if (a[k] == 1) {
//            for (int j = k * k; j <= n; j += k) {
//                a[j] = 0;
//            }
//        }
//    }
//    cout << count(a.begin(), a.begin() + n, 1);
//}

// Проверка на степень

//int main() {
//    int flag = 0;
//    int n;
//    cin >> n;
//    for (int i = 3; i <= n; i = i * 3) {
//        if (n == i) {
//           flag = 1;
//        }
//        else {
//            continue;
//        }
//    }
//    if (flag == 1) {
//        cout << "true";
//    }
//    else {
//        cout << "false";
//    }
//}


//int main() {
//    string a;
//    cin >> a;
//    int sum = 0;
//    vector<int> itog = {};
//    map<int, char> letter = { {1,'I'}, {5, 'V'}, {10,'X'}, {50,'L'}, {100,'C'}, {500,'D'}, {1000,'M'} };
//    for (char i = 0; i < a.length(); i++) {
//        for (auto let : letter) {
//            if (let.second == a[i]) {
//                itog.push_back(let.first);
//            }
//            else {
//                continue;
//            }
//        }
//    }
//
//    for (int j = 0; j < itog.size(); j++) {
//        if (itog[j] < itog[j + 1]) {
//            sum += itog[j + 1] - itog[j];
//            j++;
//        }
//        else {
//            sum += itog[j];
//        }
//    }
//    cout << sum;
//}

//подсчет единиц в битовой записи десятиного числа.

////int main() {
////    int num_s;
////    int itog = 0;
////    vector<int> ch = {};
////    int k;
////    int kol = 0;
////    cin >> k;
////    for (int i = 0; pow(2, i) <= k; i++) {
////        if (pow(2, i) < k) {
////            num_s = i;
////            continue;
////        }
////        else if (pow(2, i) == k) {
////            num_s = i;
////            break;
////        }
////        else {
////            break;
////        }
////    }
////    if (pow(2, num_s) == k) {
////        cout << 1;
////    }
////    else {
////        kol += 1;
////        int number = pow(2, num_s);
////        //cout << num_s; 
////        while (number != k) {
////            if (number + pow(2, num_s - 1) <= k) {
////                if (number + pow(2, num_s - 1) == k) {
////                    kol += 1;
////                    cout << kol;
////                    break;
////                }
////                kol += 1;
////                number += pow(2, num_s - 1);
////            }
////            else {
////                num_s--;
////            }
////        }
////    }
////
////}


//for (int i = 0; i <= k; i++) { 
// if (i == 0) { 
//  if (k == 1) { 
//   cout << 1; 
//  } 
//  else { 
//   num += 1; 
//   ch.push_back(1); 
//  } 
// } 
// else if (pow(2, i) == k) { 
//  ch.push_back(1); 
//  cout << 1; 
// } 
// else { 
//  if (pow(2, i) < k) { 
//   if (num + pow(2, i) < k) { 
// 
//   } 
//   ch.push_back(0); 
//   continue; 
//  } 
//  if (pow(2, i) > k); 
// } 
//}*/

//Обратный перевод

////int main() {
////
////    string c;
////    cin >> c;
////    reverse(c.begin(), c.end());
////    int ch = stoi(c);
////    int sum = 0;
////    vector<string> fin;
////    int b = 0;
////    for (int i = 0; i < 10; i++) {
////        int b = ch % 10;
////        if (b == 0 and ch == 0) {
////            break;
////        }
////        else {
////            fin.push_back(to_string(b));
////            ch /= 10;
////            continue;
////        }
////    }
////    //for (auto& a1 : fin) {
////    //    std::cout << a1 << " ";
////    //}
////    int count = 0;
////    for (auto& num : fin) {
////        if (num == "1") {
////            sum += pow(2, count);
////            count++;
////        }
////        else {
////            count++;
////        }
////    }
////
////    for (auto& a1 : fin) {
////    cout << a1 << " ";
////}
////    std::cout << endl;
////    std::cout << sum;
////
////}

//int main() {
//    uint32_t n;
//    cin >> n;
//    string s;
//    while (n != 0)
//    {
//        s += to_string(n % 2);
//        n /= 2;
//    }
//
//    string temp(32 - s.size(), 0);
//    s += temp;
//    //cout<<s<<endl;
//    uint32_t r = 0;
//    for (int i = s.size() - 1; i >= 0; i--)
//    {
//        if (s[i] == '1')
//            r += pow(2, s.size() - i - 1);;
//
//    }
//
//    cout << r;
//}

//Треугольник Паскаля.

////int main() {
////    int n;
////    cin >> n;
////    vector<vector<int>> vec = { {1}, { 1,1 } };
////    int c = 3;
////    vector<int>helped = {};
////    for (int i = 2; i < n; i ++) {
////        helped.resize(c);
////        helped[0] = 1;
////        helped[helped.size() - 1] = 1;
////        for (int j = 1; j < c - 1; j++) {
////            helped[j] = vec[i - 1][j] + vec[i - 1][j - 1];
////        }
////        vec.push_back(helped);
////        c++;
////    }
////    helped.resize(3);
////
////    fill(helped.begin(), helped.end(), 1);
////
////    for (auto a1 : vec) {
////        cout << "{ ";
////        for (auto a2 : a1) {
////            cout << a2 << " ";
////        }
////        cout << "}";
////    }
////}
// 
// 
// 
// 
//  Valid Parentheses
// 
// 
// 
//#include <list>
//int main() {
//    string str;
//    cin >> str;
//    list<char> st = {};
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == '{' or str[i] == '[' or str[i] == '(') {
//            st.push_front(str[i]);
//        }
//    //for (auto& a : st) {
//    //    cout << a << " ";
//    //}
//        else {
//            if (st.front() == '{' and str[i] == '}') {
//                st.erase(st.begin());
//            }
//            else if (st.front() == '[' and str[i] == ']') {
//                st.erase(st.begin());
//            }
//            else if (st.front() == '(' and str[i] == ')') {
//                st.erase(st.begin());
//            }
//            else {
//                cout << "false";
//                break;
//            }
//        }
//    }
//    for (auto& a : st) {
//        cout << a << " ";
//    }
//    cout << endl;
//    if (st.size() == 0){
//        cout << "true";
//    }
//}

//int main() {
//    vector<int> a = { 0,1 };
//    int a1 = 0;
//    for (int i = 0; i < a.size(); i++) {
//        if (find(a.begin(), a.end(), i) != a.end()) {
//            continue;
//        }
//        else {
//            a1 = i;
//        }
//    }
//    cout << a1;
//}
//
// 
// сортировка деревом.
// 
// 
 
//typedef struct tree_element {
//    int value;
//    struct tree_element* left;
//    struct tree_element* right;
//} tree_element;
//
//tree_element* create_element(int i) {
//    tree_element* elem = new tree_element;
//    elem->value = i;
//    elem->left = NULL;
//    elem->right = NULL;
//    return elem;
//}
//
//void insert_element_intree(tree_element* root, tree_element* elem) {
//    if (elem->value < root->value) {
//        if (root->left == NULL) {
//            root->left = elem;
//        }
//        else {
//            insert_element_intree(root->left, elem);
//        }
//    }
//    else {
//        if (root->right == NULL) {
//            root->right = elem;
//        }
//        else {
//            insert_element_intree(root->right, elem);
//        }
//    }
//}
//
//void print_tree(tree_element* cur_elem) {
//    if (cur_elem->left != NULL) {
//        print_tree(cur_elem->left);
//    }
//    cout << "Value " << cur_elem->value << endl;
//    if (cur_elem->right != NULL) {
//        print_tree(cur_elem->right);
//    }
//
//    cout << "Value " << cur_elem->value << endl;
//}
//
//
//int main() {
//    int a[8] = { 1,-2,8,9,22,42,1,7 };
//    tree_element* root = create_element(0);
//    for (int i = 0; i < 8; i++) {
//        tree_element* el = create_element(a[i]);
//        insert_element_intree(root, el);
//    }
//    cout << "My tree" << endl;
//    print_tree(root);
//    return 0;
//}


//
//typedef struct tree_element {
//    int value;
//    struct tree_element* left;
//    struct tree_element* right;
//}tree_element;
//
//tree_element* init_element(int val) {
//    tree_element* elem = new tree_element;
//    elem->value = val;
//    elem->left = NULL;
//    elem->right = NULL;
//    return elem;
//}
//
//void input_into_tree(tree_element* root, tree_element* elem) {
//    if (elem->value < root->value) {
//        if (root->left == NULL) {
//            root->left = elem;
//        }
//        else {
//            input_into_tree(root->left, elem);
//        }
//    }
//    else if (elem->value > root->value) {
//        if (root->right == NULL) {
//            root->right = elem;
//        }
//        else {
//            input_into_tree(root->right, elem);
//        }
//    }
//}
//
//bool check_for(vector<int>& a, tree_element* root) {
//    bool flag = 1;
//    for (int i = 0; i < a.size(); i++) {
//        if (a[i] = a[a.size() - 1]) {
//            if (a[i] > a[i - 1]) {
//                continue;
//            }
//            else {
//                flag = 0;
//                break;
//            }
//        }
//        else if (a[i] != a[a.size() - 1] && a[i] <= a[i + 1]) {
//            continue;
//        }
//        else {
//            flag = 0;
//            break;
//        }
//    }
//    return flag;
//}
//
//
//void print_tree(tree_element* root) {
//    vector<int> fin = {};
//    if (root->left != NULL) {
//        print_tree(root->left);
//    }
//    //cout << "Value: " << root->value  << endl;
//    fin.push_back(root->value);
//    if (root->right != NULL) {
//        print_tree(root->right);
//    }
//    for (auto& c : fin) {
//        cout << c << " ";
//    }
//}
//
//int main() {
//    int a[8] = { 1,-2,8,9,22,42,1,7 };
//    tree_element* root = init_element(0);
//    for (int i = 0; i < size(a); i++) {
//        tree_element* elem = init_element(a[i]);
//        input_into_tree(root,elem);
//    }
//    //print_tree(root);
//    vector<int> a1 = {};
//    print_tree(root);
//    //for (auto& c : a1) {
//    //    cout << c << " ";
//    //}
//    //cout << endl;
//    //cout << check_for(a1, root);
//}

//int main() {
//    vector<int> a = { 1,2,3,3,4,2,1,2,3,4,77};
//    vector<int> max_lower = {};
//    vector<int> max_uper = {};
//    vector<int> timeless = {};
//    a.resize(a.size() + 1);
//    a[a.size() - 1] = -123123;
//    for (int i = 1; i < a.size(); i++) {
//        if ((a[i] > a[i - 1])) {
//            timeless.push_back(a[i - 1]);
//        }
//        else {
//            timeless.push_back(a[i-1]);
//            if (max_uper.size() < timeless.size()) {
//                max_uper.resize(timeless.size());
//                max_uper = timeless;
//                timeless = {};
//            }
//            else {
//                timeless = {};
//            }
//        }
//    }
//    for (auto& s : max_uper) {
//        cout << s << " ";
//    }
//    cout << endl;
//    cout << max_uper.size();
//}
// 
// 
// 
// Контекст яндекс 4.0 1 задача.
// 
// 
//////int main() {
//////    int n;
//////    cin >> n;
//////    int i = 0;
//////    vector<int> start = {};
//////    int k = 0;
//////    int kol = 0;
//////    for (int i = 0; i < n; i++) {
//////        int a;
//////        cin >> a;
//////        start.push_back(a);
//////    }
//////    int ch = *max_element(start.begin(), start.end());
//////    //cout << ch << endl;
//////    if (ch != start.back()) {
//////        cout << "-1";
//////        goto abs;
//////    }
//////    else {
//////        //chek:
//////        //if (start[0] != start[start.size() - 1]) {
//////        //    goto run;
//////        //}
//////        //else {
//////        //    goto fault;
//////        //}
//////    run:
//////        for (i; i < 1000000000; i++) {
//////            if (start[i] < ch) {
//////                k++;
//////            }
//////            else {
//////                std::for_each(begin(start), begin(start) + k, [](int& x) { x += 1; });
//////                k = 0;
//////                kol += 1;
//////                if (start[0] != start[start.size() - 1]) {
//////                    i = 0;
//////                    goto run;
//////                }
//////                else {
//////                    goto fault;
//////                }
//////            }
//////        }
//////    }
//////fault:
//////    cout << kol;
//////abs:
//////    cout << " ";
//////}



////////////int main() {
////////////    vector<int> id_car = {};
    //vector<int> day = {};
    //vector<int> hours = {};
    //vector<int> minutes = {};
    //vector<int> num_zak = {};
    //vector<char> Status = {};
    ////////////vector<int> def_id_car = {};
    ////////////int n;
    ////////////int id_car_1;
    //int day1;
    //int hours1;
    //int minutes1;
    //int num_zak1;
    //char Status1;
    //////////cin >> n;
///////////*    for (int kol = 0; kol < n; kol++) {
//////////        cin >> id_car_1;*/ //>> day1 >> hours1 >> minutes1 >> num_zak1 >> Status1;
        ////////////id_car.push_back(id_car_1);
        //day.push_back(day1);
        //hours.push_back(hours1);
        //minutes.push_back(minutes1);
        //num_zak.push_back(num_zak1);
        //Status.push_back(Status1);
//////////    }
//////////
//////////    for (int i = 0; i < id_car.size(); i++){
//////////        bool in = find(def_id_car.begin(), def_id_car.end(), id_car[i]) != def_id_car.end();
//////////        if (in == 0) {
//////////            def_id_car.push_back(id_car[i]);
//////////        }
//////////        else {
//////////            continue;
//////////        }
//////////}

//int main()
//{
//    std::vector<int> vec{ 6, 3, 8, -9, 1, -2, 8 };
//    int target = -9;
//
//    bool found = std::find(vec.begin(), vec.end(), target) != vec.end();
//
//    std::cout << found << std::endl;    // true
//
//    return 0;
//}

//int main() {
//    int i = 0;
//    int dl, raz;
//    cin >> dl >> raz;
//    vector<int> a = {};
//    for (; i < dl; i++) {
//        int num;
//        cin >> num;
//        a.push_back(num);
//    }
//    for (int j = 0; j <= a.size() - raz; j++) {
//        cout << *std::max_element(a.begin() + j, a.begin() + j + raz) << " ";
//    }
//}

//void largest_proper_divisor(int n) {
//    int kol = -1;
//    for (int i = n - 1; i > 1; --i) {
//        if (n % i == 0) {
//            kol = i;
//        }
//        else {
//             cout << throw("largest proper divisor is not defined for n=");
//        }
//    }
//    cout << kol;
//}
//
//int main() {
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int n;
//    cin >> n;
//    largest_proper_divisor(n);
//}


//   Hackerrank medium throw

//////int largest_proper_diviso(int n)
//////{
//////    int kol = -1;
//////    for (int i = n - 1; i > 1; --i) {
//////        if (n % i == 0) {
//////            kol = i;
//////        }
//////    }
//////    return kol == -1 ? throw std::overflow_error("OMG") : kol;
//////}
//////
//////int main(){
//////    int n;
//////    cin >> n;
//////    try
//////    {
//////        std::cout << "result=" << largest_proper_diviso(n) << '\n';
//////    }
//////    catch (const std::overflow_error& e)
//////    {
//////        std::cout << "largest proper divisor is not defined for n="  << n << '\n';
//////    }
//////    cout << "returning control flow to caller";
//////}


//class Person {
//public:
//    Person( string fname, string lname){
//        name = fname;
//        last_name = lname;
//    }
//    string get_first_name() {
//        return name;
//    }
//    string get_last_name() {
//        return last_name;
//    }
//private:
//    string name;
//    string last_name;
//};
//
//ostream& operator<<(ostream& out, Person& pers) {
//    out << "first_name=" << pers.get_first_name() << "," << "last_name=" << pers.get_last_name();
//    return out;
//}
//
//int main() {
//    string first_name, last_name, event;
//    cin >> first_name >> last_name >> event;
//    auto p = Person(first_name, last_name);
//    cout << p << " " << event << endl;
//    return 0;
//}



//Hakerrank medium c++ classes and count in multi


//class A
//{
//public:
//    A() {
//        callA = 0;
//    }
//private:
//    int callA;
//    void inc() {
//        callA++;
//    }
//
//protected:
//    void func(int& a)
//    {
//        a = a * 2;
//        inc();
//    }
//public:
//    int getA() {
//        return callA;
//    }
//};
//
//class B
//{
//public:
//    B() {
//        callB = 0;
//    }
//private:
//    int callB;
//    void inc() {
//        callB++;
//    }
//protected:
//    void func(int& a)
//    {
//        a = a * 3;
//        inc();
//    }
//public:
//    int getB() {
//        return callB;
//    }
//};
//
//class C
//{
//public:
//    C() {
//        callC = 0;
//    }
//private:
//    int callC;
//    void inc() {
//        callC++;
//    }
//protected:
//    void func(int& a)
//    {
//        a = a * 5;
//        inc();
//    }
//public:
//    int getC() {
//        return callC;
//    }
//};
//
//class D : public A,B,C
//{
//
//    int val;
//public:
//    //Initially val is 1
//    D()
//    {
//        val = 1;
//    }
//    //Implement this function
//    void update_val(int new_val)
//    {
//        int a = new_val;
//        while (new_val != 1) {
//            if (new_val % 2 == 0) {
//                A::func(val);
//                new_val /= 2;
//            }
//            else if (new_val % 3 == 0) {
//                B::func(val);
//                new_val /= 3;
//            }
//            else if (new_val % 5 == 0) {
//                C::func(val);
//                new_val /= 5;
//            }
//        }
//    }
//    //For Checking Purpose
//    void check(int); //Do not delete this line.
//};
//void D::check(int new_val)
//{
//    update_val(new_val);
//    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
//}
//
//int main() {
//    D d;
//    int a;
//    cin >> a;
//    d.check(a);
//}



#include <iostream>
using namespace std;
//enum class Color { red, green, orange };
//enum class Fruit { apple, orange, pear };
//
//
//template < typename T > struct Traits;
//
//template < >
//struct Traits <Fruit>
//{
//public: static
//     string name(int index){
//        Fruit f = (Fruit)index;
//        switch (f)
//        {
//            case Fruit::apple:
//                return "apple";
//            case Fruit::orange:
//                return "orange";
//            case Fruit::pear:
//                return "pear";
//        }
//
//        return "unknown";
//    }
//};
//
//template < >
//struct Traits <Color> 
//{
//public: static
//    string name(int index) {
//        Color col = Color(index);
//        switch (col)
//        {
//        case Color::red:
//            return "red";
//        case Color::green:
//            return "green";
//        case Color::orange:
//            return "orange";
//        }
//        return "unknown";
//    }
//};
//
//int main() {
//    int t = 0;
//    std::cin >> t;
//    for (int i = 0; i != t; ++i) {
//        int index1;
//        std::cin >> index1;
//        int index2;
//        std::cin >> index2;
//        cout << Traits<Color>::name(index1) << " ";
//        cout << Traits<Fruit>::name(index2) << "\n";
//    }
//}

// 
// Не решил
// 
//////struct Workshop {
//////public:
//////    int start_time;
//////    int duration;
//////    int end_time;
//////};
//////struct Available_Workshops {
//////    int n;
//////    Workshop mas[];
//////    Available_Workshops* initialize(int start_time[], int duration[], int n) {
//////        Workshop* obj = new Workshop[n];
//////        duration[n] = obj->end_time - obj->start_time;
//////        return obj;
//////    }
//////};
//////int main() {
//////}


//class Matrix {
//private:
//    vector<vector<int>> matrix;
//public:
//    void Mat(vector<int> first, vector<int> second) {
//        vector<int> result = {};
//        for (int i = 0; i < first.size(); i++) {
//            result.push_back(first[i] + second[i]);
//        }
//        for (auto& c : result) {
//            cout << c << " ";
//        }
//    }
//};
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> m1;
//    vector<int> m2;
//    Matrix max;
//    for (int i = 0; i < n; i++) {
//        int f, s;
//        cin >> f >> s;
//        for (int j = 0; j < f * s; j++) {
//            int num;
//            int num1;
//            cin >> num;
//            cin >> num1;
//            m1.push_back(num);
//            m2.push_back(num1);
//        }
//    }
//    max.Mat(m1, m2);
//}



//int main()
//{
//    int x;
//    int y;
//    cin >> x >> y;
//    for (int i = 64 * y; i < 64 * y + 63; i++) {
//        if (x == i) {
//            cout << "1";
//        }
//        else {
//            cout << "0";
//        }
//    }
//
//}

//Найти ошибку и понять что не так.


//class A {
//
//
//public:
//    vector<int> a;
//    A(vector<int> vector1) {
//        a = vector1;
//    }
//    void Set(int pos, int elem) {
//        if (pos >= 1) {
//            a[pos - 1] = elem;
//        }
//    }
//    int Get(int pos) {
//        if (a[pos-1] != 0 and pos >= 1) {
//            return a[pos-1];
//        }
//        return -1;
//    }
//    void Print() {
//        for (auto& a1 : a) {
//            cout << a1 << endl;
//        }
//    }
//};
//
//int main() {
//    vector<int> vec = { 3,1 };
//    int c = 1;
//    int d = 2;
//    A a(vec);
//    if (c > a.a.size()) {
//        a.a.resize(c);
//        a.Set(c, d);
//    }
//    a.Get(1);
//    a.Get(2);
//    a.Print();
//}

//class Liderchessboard {
//public:
//    vector<int> lid;
//    vector<int> places;
//    int now = 0;
//    int cur_pos = 0;
//    int new_pos;
//    int place = 1;
//    int curr_it = 0;
//    int flag = 1;
//
//    Liderchessboard(vector<int> vec) {
//        lid = vec;
//        //lid.resize(vec.size() + 1);
//    }
//    void TakePlace() {
//        for (int i = 0; i < lid.size(); i++) {
//            if (i == lid.size() - 1) {
//                if (lid[i] == lid[i - 1]) {
//                    places.push_back(place);
//                }
//                else {
//                    places.push_back(place + 1);
//                }
//            }
//            else if (lid[i] != lid[i + 1] and i != lid.size() - 2) {
//                places.push_back(place);
//                place++;
//            }
//            else {
//                places.push_back(place);
//            }
//        }
//    }
//
//    void print() {
//        for (int i = 0; i < lid.size(); i++) {
//            cout << lid[i] << " ";
//        }
//    }
//     
//    void AddVec(vector<int> nums) {
//        //reverse(lid.begin(), lid.end());
//        //reverse(places.begin(), places.end());
//        lid.resize(lid.size() + 1);
//        places.resize(places.size() + 1);
//        //lid.back() = nums.front();
//        lid.back() = 0;
//        places.back() = 6;
//        reverse(lid.begin(), lid.end());
//        for (int j = 0; j < nums.size(); j++) {
//            //int count2 = curr_it;
//            flag = 1;
//            for (int i = curr_it; i < lid.size(); i++) {
//                if (j == 0) {
//                    if (now > lid[i]) {
//                        lid[i] = now;
//                        curr_it = i;
//                        break;
//                    }
//                    else {
//                        flag = 0;
//                        continue;
//                    }
//                }
//                if (flag == 1) {
//                    lid[curr_it] += nums[j];
//                }
//                if (lid[i] > lid[i + 1]) {
//                    int time = lid[i + 1];
//                    lid[i + 1] = lid[i];
//                    lid[i + 1] = time;
//                    curr_it++;
//                    flag = 0;
//                    continue;
//                }
//                else {
//                    break;
//                }
//            }
//        }
//    }
//};




//int main() {
//    vector<int> a = { 100, 100, 50, 40, 40, 20, 10 };
//    vector<int> new_player = { 5, 25};
//    Liderchessboard lid(a);
//    lid.TakePlace();
//    lid.AddVec(new_player);
//    lid.print();
//    //for (int i = 0; i < new_player.size(); i++) {
//    //    cout << lid.AddVec(new_player[i]) << " ";
//    //}
//}


//for (int i = lid.size() - 1, j = 0; i >= 0, j < nums.size() - 1; i--, j++) {
//    now += nums[j];
//    if (i = lid.size() - 1 and now > lid[i]) {
//        lid[i] = now;
//    }
//    else if (now > lid[i]) {
//        while (now > lid[i]) {
//            int time = lid[i - 1];
//            lid[i - 1] = now;
//            lid[i] = time;
//        }
//    }
//    else {
//        continue;
//    }
//}

//////int main() {
//////    int a = 2;
//////    int i = 0;
//////    for (int j = 0; j < 1; j++) {
//////        if (a >= 2) {
//////            i++;
//////        }
//////        if (a > 1) {
//////            i++;
//////        }
//////    }
//////    cout << i;
//////}

//class Matrix {
//public:
//    vector<int> a;
//    Matrix() {};
//    Matrix(vector<int> matr1) {
//        a = matr1;
//    }
//};
//
//vector<int> operator +(Matrix first, Matrix second) {
//    vector<int> c;
//    for (int i = 0; i < first.a.size(); i++) {
//        c.push_back(first.a[i] + second.a[i]);
//    }
//    return c;
//}
//std::ostream& operator << (std::ostream& os, const Matrix& matr)
//{
//    return os << matr.a << " " << matr.a;
//}
//
//int main() {
//    vector<int> a1 = { 1,2,3,4 };
//    vector<int> b1 = { 1,2,3,4 };
//    vector<int> c1 = { };
//    Matrix a(a1);
//    Matrix b(b1);
//    c1 =  a + b;
//    cout << c1;
//
//}
// 
// ///                 ip в десятичное число по 32 разрядной со.
////#include <cstdint>
////#include <string>
////
////uint32_t ip_to_int32(const std::string& ip) {
////    vector<string> mas_str = {};
////    string time_str;
////    int n = 0;
////    for (int i = 0; i < ip.length(); i++) {
////        if (i == ip.length() - 1) {
////            time_str += ip[i];
////            mas_str.push_back(time_str);
////        }
////        else if (ip[i] != '.') {
////             time_str += ip[i];
////        }
////        else {
////            mas_str.push_back(time_str);
////            time_str = "";
////            n++;
////        }
////    }
////    string str_ch = "";
////    string time_str_2 = "";
////    int ost = 2;
////    uint32_t num = 0;
////   //vector<int> test = {};
////    for (string a : mas_str) {
////        int ch = stoi(a);
////        while (ch >= ost) {
////            if (ch % 2 == 1) {
////                ch = ch / 2;
////                time_str_2 += "1";
////            }
////            else {
////                ch = ch / 2;
////                time_str_2 += "0";
////            }
////        }
////        time_str_2 += to_string(ch);
////        if (time_str_2.length() != 8) {
////            while (time_str_2.length() != 8) {
////                time_str_2 += "0";
////            }
////        }
////        reverse(time_str_2.begin(), time_str_2.end());
////        str_ch += time_str_2;
////        time_str_2 = "";
////    }
////    reverse(str_ch.begin(), str_ch.end());
////    for (int i = 0; i < str_ch.length(); i++) {
////        if (str_ch[i] == '1') {
////            num += pow(2, i);
////            //test.push_back(i);
////
////        }
////    }
////    return num;
////}
//#include <cstdint>
//#include <string>
//#include <sstream>
//#include <bitset>
//#include <vector>
//
//uint32_t ip_to_int32(const std::string& ip) {
//    std::istringstream is(ip);
//    uint32_t res = 0;
//
//    for (int i = 0; i < 4; ++i) {
//        char ch;
//        int val;
//        is >> val >> ch;
//        res = res << 8;
//        res ^= val;
//    }
//
//    return res;
//}
//
//int main() {
//    //for (auto a : ip_to_int32("128.32.10.1")) {
//    //    cout << a << " ";
//    //}
//    cout << ip_to_int32("128.32.10.1");
//    //cout << pow(2, 0);
//}



// Снежный ком сложений.  Codewars
// 
// 
// 
//#include <vector>
//
//std::vector<int> add(const std::vector<int>& arr)
//{
//    vector<int> vec;
//    vec = arr;
//    int n = 0;
//    for (int i = 1; i < arr.size(); i++) {
//        vec[i] = vec[n] + vec[i];
//        n++;
//    }
//    return vec;
//}
//
//int main(){
//    vector<int> m = { 1,2,3,4,5 };
//    for (auto& a : add(m)) {
//        cout << a << " ";
//    }
//}

//#include <string>
//
//std::string DNAStrand(const std::string& dna)
//{
//    string fin;
//    char A_T = 'T';
//    char C_G = 'G';
//    for (int i = 0; i < dna.length(); i++) {
//        if (dna[i] == 'A') {
//            fin +=  A_T;
//        }
//        else if (dna[i] == 'C') {
//            fin += C_G;
//        }
//        else if (dna[i] == 'T') {
//            fin += 'A';
//        }
//        else if (dna[i] == 'G') {
//            fin += 'C';
//        }
//
//    }
//    return fin;
//}
//
//int main() {
//    string stra = "GTAT";
//    cout << DNAStrand(stra);
//}

//struct tree_element {
//    int value;
//    int left = -1;
//    int right = -1;
//};
//
//vector<int> Research(vector<vector<int>> matrix) {  //vector<pair<int, vector<int>>>
//    vector<pair<int, vector<int>>> vepr;
//    vector<int> time = {};
//    for (int i = 0; i < 6; i++) {
//        for (int j = 0; j < 6; j++) {
//            if (matrix[i][j] == 1) {
//                time.push_back((j));
//            }
//        }
//        vepr.push_back(make_pair(i, time));
//        time = {};
//    }
//    //for (auto& a : vepr) {
//    //    for (auto& b : a.second) {
//
//    //    }
//    //}
//    vector<int> counter;
//    for (auto& c : vepr) {
//        for (auto& d : c.second) {
//            counter.push_back(d);
//        }
//    }
//    bool it = true;
//    for (auto& m : counter) {
//        if (count(counter.begin(), counter.end(), m) > 2) {
//            it = false;
//        }
//    }
//
//    if
//    return counter;
//}
//
//
//int main() {
//    std::vector<std::vector<int>> c = {
//        {0, 1, 1, 0, 0, 0},
//        {1, 0, 1, 0, 0, 0},
//        {1, 1, 0, 0, 0, 0},
//        {0, 0, 0, 0, 1, 0},
//        {0, 0, 0, 1, 0, 0},
//        {0, 0, 0, 0, 0, 0}
//    };
//    vector<int> a = { 1,2,1,2,2 };
//    //for (int i = 0; i < 2; i++) {
//    //    for (int j = 0; j < 2; j++) {
//    //        cout << c[i][j];
//    //    }
//    //}
//
//    //for (auto& a : Research(c)) {
//    //    cout << a.first << " ";
//    //    for (auto b : a.second) {
//    //        cout << b << " ";
//    //    }
//    //    cout << endl;
//    //}
//    //if (count(a.begin(), a.end(), 2) > 2) {
//    //    cout << "0";
//    //}
//    //else {
//    //    cout << "1";
//    //}
//    // 
//    for (auto& a : Research(c)) {
//        cout << a << " ";
//    }
//
//}
















//typedef struct tree_element {
//    int value;
//    struct tree_element* left;
//    struct tree_element* right;
//} tree_element;
//
//tree_element* create_element(int i) {
//    tree_element* elem = new tree_element;
//    elem->value = i;
//    elem->left = NULL;
//    elem->right = NULL;
//    return elem;
//}
//
//void insert_element_intree(tree_element* root, tree_element* elem) {
//    if (elem->value < root->value) {
//        if (root->left == NULL) {
//            root->left = elem;
//        }
//        else {
//            insert_element_intree(root->left, elem);
//        }
//    }
//    else {
//        if (root->right == NULL) {
//            root->right = elem;
//        }
//        else {
//            insert_element_intree(root->right, elem);
//        }
//    }
//}
//
//void print_tree(tree_element* cur_elem) {
//    if (cur_elem->left != NULL) {
//        print_tree(cur_elem->left);
//    }
//    cout << "Value " << cur_elem->value << endl;
//    if (cur_elem->right != NULL) {
//        print_tree(cur_elem->right);
//    }
//
//    cout << "Value " << cur_elem->value << endl;
//}
//
//
//int main() {
//    int a[8] = { 1,-2,8,9,9,42,1,7 };
//    tree_element* root = create_element(0);
//    for (int i = 0; i < 8; i++) {
//        tree_element* el = create_element(a[i]);
//        insert_element_intree(root, el);
//    }
//    cout << "My tree" << endl;
//    print_tree(root);
//    return 0;
//}


//typedef struct tree_element {
//    int value;
//    tree_element* left;
//    tree_element* right;
//}tree_element;
//
//tree_element* create_element(int i) {
//    tree_element* elem = new tree_element;
//    elem->value = i;
//    elem->left = NULL;
//    elem->right = NULL;
//    return elem;
//}
//int left_dl = 0;
//int right_dl = 0;
//
//int check_higth(tree_element* root) {
//    if (root->left != NULL) {
//        left_dl++;
//        check_higth(root->left);
//    }
//    if (root->right != NULL) {
//        right_dl++;
//        check_higth(root->right);
//    }
//    return (right_dl > left_dl) ? right_dl - 1 : left_dl - 1;
//}
//
//void insert_element(tree_element* value, tree_element* root) {
//    if (value->value < root->value) {
//        if (root->left == NULL) {
//
//            root->left = value;
//        }
//        else {
//            insert_element(value, root->left);
//        }
//    }
//    else {
//        if (root->right == NULL) {
//            root->right = value;
//        }
//        else {
//            insert_element(value, root->right);
//        }
//    }
//    //return right_dl > left_dl ? right_dl : left_dl;
//}
//
//void print_tree(tree_element* cur_elem) {
//    if (cur_elem->left != NULL) {
//        print_tree(cur_elem->left);
//    }
//    cout << "Value: " << cur_elem->value << endl;
//    if (cur_elem->right != NULL) {
//        print_tree(cur_elem->right);
//    }
//    //cout << "Value: " << cur_elem->value << endl;
//}
//
//
//int main() {
//    int a[8] = { 1,-2,8,9,11,42,1,7 };
//    tree_element* root = create_element(0);
//    for (int i = 0; i < 8; i++) {
//        tree_element* el = create_element(a[i]);
//        insert_element(el, root);
//    }
//    cout << "My tree" << endl;
//    print_tree(root);
//    cout << endl;
//    cout << check_higth(root);
//}


//typedef struct tree_element {
//    int value;
//    struct tree_element* left;
//    struct tree_element* right;
//} tree_element;
//
//tree_element* create_element(int i) {
//    tree_element* elem = new tree_element;
//    elem->value = i;
//    elem->left = NULL;
//    elem->right = NULL;
//    return elem;
//}
//
//void insert_element_intree(tree_element* root, tree_element* elem) {
//    if (elem->value < root->value) {
//        if (root->left == NULL) {
//            root->left = elem;
//        }
//        else {
//            insert_element_intree(root->left, elem);
//        }
//    }
//    else {
//        if (root->right == NULL) {
//            root->right = elem;
//        }
//        else {
//            insert_element_intree(root->right, elem);
//        }
//    }
//}
//
//void print_tree(tree_element* cur_elem) {
//    if (cur_elem->left != NULL) {
//        print_tree(cur_elem->left);
//    }
//    cout << "Value " << cur_elem->value << endl;
//    if (cur_elem->right != NULL) {
//        print_tree(cur_elem->right);
//    }
//
//    cout << "Value " << cur_elem->value << endl;
//}
//
//
//int main() {
//    int a[8] = { 1,-2,8,9,22,42,1,7 };
//    tree_element* root = create_element(0);
//    for (int i = 0; i < 8; i++) {
//        tree_element* el = create_element(a[i]);
//        insert_element_intree(root, el);
//    }
//    cout << "My tree" << endl;
//    print_tree(root);
//    return 0;
//}


//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int SIZE = 100;
//
//void matrix_input(int matrix[][SIZE], int size)
//{
//    for (int i = 0; i < size; ++i)
//    {
//        for (int j = 0; j < size; ++j)
//        {
//            cin >> matrix[i][j];
//        }
//    }
//}
//
//int main()
//{
//    int size;
//    int start, end;
//    cin >> size;
//
//    vector<int> from(size, -1);
//    vector<int> used(size, 0);
//    vector<int> dist(size);
//
//    int mainMatrix[SIZE][SIZE];
//    int way[SIZE];
//    int counter = 0;
//    matrix_input(mainMatrix, size);
//
//    cin >> start >> end;
//    --start; --end;
//
//    queue<int> Queue;
//    Queue.push(start);
//
//    dist[start] = 0;
//    used[start] = 1;
//
//    while (!Queue.empty())
//    {
//        int hold = Queue.front();
//        Queue.pop();
//
//        for (int i = 0; i < size; ++i)
//        {
//            if (mainMatrix[hold][i] && !used[i])
//            {
//                dist[i] = dist[hold] + 1;
//                from[i] = hold;
//                Queue.push(i);
//                used[i] = true;
//            }
//        }
//
//    }
//
//    if (used[end])
//    {
//        if (dist[end] == 0)
//        {
//            cout << dist[end] << endl;
//        }
//        else
//        {
//            cout << dist[end] << endl;
//            vector <int> way;
//            for (int i = end; i != -1; i = from[i])
//            {
//                way.push_back(i);
//            }
//            reverse(way.begin(), way.end());
//            for (int i = 0; i < way.size(); ++i)
//            {
//                cout << way[i] + 1 << " ";
//            }
//        }
//    }
//    else
//    {
//        cout << -1 << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<std::string> words = { "apple", "banana", "apple", "orange", "apple" };
//    std::string word_to_remove = "apple";
//
//    words.erase(std::remove_if(words.begin(), words.end(), [&](const std::string& s) {
//        return s == word_to_remove;
//        }), words.end());
//
//    // Выводим содержимое вектора после удаления
//    for (const auto& word : words) {
//        std::cout << word << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}



#include <iostream>
#include <vector>
#include <algorithm>

//bool compareFunction(string a, string b) { return a < b; }

//bool mutations(const std::vector<std::string>& alice, const std::vector<std::string>& bob, std::string word, int turn) {
//    int bob_end = 0;
//    vector<string> test_alice = alice;
//    vector<string> test_bob = bob;
//    int entire_bob_0 = 1;
//    int entire_alice_0 = 0;
//    int entire_bob_1 = 0;
//    int entire_alice_1 = 1;
//    bool finish_bool = false;
//    int alice_end = 0;
//    if (turn == 0) {
//        while (entire_alice_0 != entire_bob_0) {
//            for (auto& words : test_alice) {
//                if ((words.substr(0, 2) == word.substr(0, 2)) or (words.substr(1, 3) == word.substr(1, 3)) or (words.substr(0, 1) + words[3] == word.substr(0, 1) + word[3]) or (words[0] + words.substr(2, 3) == word[0] + word.substr(2, 3))) {
//                    finish_bool = false;
//                    word = words;
//                    entire_alice_0++;
//                    words = "0000";
//                    break;
//                }
//                //if (words == test_alice.back() and entire == 0) {
//                //    finish == 1;
//                //}
//
//            }
//            for (auto& words : test_bob) {
//                if ((words.substr(0, 2) == word.substr(0, 2)) or (words.substr(1, 3) == word.substr(1, 3)) or (words.substr(0, 1) + words[3] == word.substr(0, 1) + word[3]) or (words[0] + words.substr(2, 3) == word[0] + word.substr(2, 3))) {
//                    finish_bool = true;
//                    word = words;
//                    entire_bob_0++;
//                    words = "0000";
//                    break;
//                }
//                //if (words == test_bob.back() and entire_bob == 0) {
//                //    finish == 1;
//                //}
//            }
//        }
//        if (entire_alice_0 == entire_bob_0) {
//            finish_bool == false;
//        }
//        else {
//            finish_bool == true;
//        }
//    }
//    else {
//        while (entire_alice_1 != entire_bob_1) {
//            for (auto& words : test_bob) {
//                if ((words.substr(0, 2) == word.substr(0, 2)) or (words.substr(1, 3) == word.substr(1, 3)) or (words.substr(0, 1) + words[3] == word.substr(0, 1) + word[3]) or (words[0] + words.substr(2, 3) == word[0] + word.substr(2, 3))) {
//                    finish_bool = true;
//                    word = words;
//                    entire_bob_1++;
//                    words = "0000";
//                    break;
//                }
//                //if (words == test_bob.back() and entire == 0) {
//                //    finish == 1;
//                //}
//            }
//            for (auto& words : test_alice) {
//                if ((words.substr(0, 2) == word.substr(0, 2)) or (words.substr(1, 3) == word.substr(1, 3)) or (words.substr(0, 1) + words[3] == word.substr(0, 1) + word[3]) or (words[0] + words.substr(2, 3) == word[0] + word.substr(2, 3))) {
//                    finish_bool = false;
//                    word = words;
//                    entire_alice_1++;
//                    words = "0000";
//                    break;
//                }
//                //if (words == test_alice.back() and entire == 0) {
//                //    finish == 1;
//                //}
//            }
//        }        
//        if (entire_alice_1 == entire_bob_1) {
//            finish_bool == true;
//        }
//        else {
//            finish_bool == false;
//        }
//    }
//    return finish_bool;
//}
//
//
//
//
//
//int main() {
//    vector<string> alice = { "rend", "plat", "bear", "soar", "mare", "pare", "flap", "neat", "clan", "pore" };
//    const std::vector<std::string> bob{ "boar", "clap", "mere", "lend", "near", "peat", "pure", "more", "plan", "soap" };
//    cout << mutations(alice, bob, "send", 0);
//    //string test = "flat";
//    //for (auto& words : alice) {
//    //    if ((words.substr(0, 2) == test.substr(0, 2)) or (words.substr(1, 3) == test.substr(1, 3)) or (words.substr(0, 1) + words[3] == test.substr(0, 1) + test[3]) or (words[0] + words.substr(2, 3) == test[0] + test.substr(2, 3))) {
//    //        words = "0000";
//    //    }
//    //}
//    //for (auto& word : alice) {
//    //    cout << word << " ";
//    //}
//}











//bool compareFunction(string a, string b) { return a < b; }
////compare any way you like, here I am using the default string comparison
//
//
//int main() {
//    vector<string> a = { "mare","care"};
//    std::sort(a.begin(), a.end(), compareFunction);
//    for (auto a1 : a) {
//        cout << a1 << " ";
//    }
//}










//Морзе











//const std::map<std::string, std::string> MORSE_CODE = {
//    {".-",     "a"},
//    {"-...",   "b"},
//    {"-.-.",   "c"},
//    {"-..",    "d"},
//    {".",      "e"},
//    {"..-.",   "f"},
//    {"--.",    "g"},
//    {"....",   "h"},
//    {"..",     "i"},
//    {".---",   "j"},
//    {"-.-",    "k"},
//    {".-..",   "l"},
//    {"--",     "m"},
//    {"-.",     "n"},
//    {"---",    "o"},
//    {".--.",   "p"},
//    {"--.-",   "q"},
//    {".-.",    "r"},
//    {"...",    "s"},
//    {"-",      "t"},
//    {"..-",    "u"},
//    {"...-",   "v"},
//    {".--",    "w"},
//    {"-..-",   "x"},
//    {"-.--",   "y"},
//    {"--..",   "z"},
//    {".----",  "1"},
//    {"..---",  "2"},
//    {"...--",  "3"},
//    {"....-",  "4"},
//    {".....",  "5"},
//    {"-....",  "6"},
//    {"--...",  "7"},
//    {"---..",  "8"},
//    {"----.",  "9"},
//    {"-----",  "0"},
//};
//
//
//std::string trim(const std::string& str) {
//    auto start = std::find_if_not(str.begin(), str.end(), [](int c) {
//        return std::isspace(c);
//        });
//    auto end = std::find_if_not(str.rbegin(), str.rend(), [](int c) {
//        return std::isspace(c);
//        }).base();
//        return (start >= end ? "" : std::string(start, end));
//}
//
//string morse(string morseCode) {
//
//    auto start = std::find_if_not(morseCode.begin(), morseCode.end(), [](int c) {
//        return std::isspace(c);
//        });
//    auto end = std::find_if_not(morseCode.rbegin(), morseCode.rend(), [](int c) {
//        return std::isspace(c);
//        }).base();
//
//    string res_str = string(start, end);
//    string time = "";
//    string strfin;
//    //vector<string>
//
//    for (int i = 0; i <= res_str.length(); i++) {
//        if (res_str[i] != ' ') {
//            time += res_str[i];
//        }
//        if (i == res_str.length() - 1){
//            for (auto& a : MORSE_CODE) {
//                if (a.first == time) {
//                    strfin += a.second;
//                    break;
//                }
//            }
//        }
//        else if (res_str[i] == ' ') {
//            for (auto& a : MORSE_CODE) {
//                if (a.first == time) {
//                        strfin += a.second;
//                        time = "";
//                        break;
//                }
//            }
//            if (i != res_str.length() - 1 and res_str[i + 1] == ' ') {
//                strfin += " ";
//                i += 2;
//            }
//        }
//    }
//    return strfin;
//}
//
//int main() {
//    cout << morse(".... . -.--   .--- ..- -.. .");
//}



//// Следующее большее двочино число
// 
// 
// 
// 
// 
////#include <iostream>
////#include <string>
////
////std::string decimalToBinary(int decimal) {
////    if (decimal == 0)
////        return "0"; // если число равно 0, возвращаем "0"
////
////    std::string binary;
////    while (decimal > 0) {
////        // получаем остаток от деления на 2 и добавляем его к строке двоичного представления
////        binary = std::to_string(decimal % 2) + binary;
////        // делим на 2
////        decimal /= 2;
////    }
////    return binary;
////}
////
////int nextHigher(int value)
////{
////    string bits = decimalToBinary(value);
////    if (count(bits.begin(), bits.end(), '0') == 0) {
////        bits = '0' + bits;
////    }
////    if (count(bits.begin(), bits.end(), '1') == 1 and bits[0] == '1') {
////        bits = '0' + bits;
////    }
//// /*   if (count(bits.begin(), bits.end(), '0') == 1 and bits[bits.length() - 1] == '0') {
////        bits[bits.length() - 2] = '0'
////            bits[bits.length() - 2] = '0'
////    };*/
////
////    string strfin = "";
////    int count = 0;
////    for (int i = bits.length() - 1; i >= 0; i--)
////    {
////        if (count == 0 and i != 0 and bits[i - 1] == '0' and bits[i] == '1') {
////            strfin += bits[i - 1];
////            strfin += bits[i];
////            i--;
////            count++;
////        }
////        else {
////            strfin += bits[i];
////        }
////    }
////
////    int num = 0;
////
////    for (int j = 0; j < strfin.length(); j++) {
////        if (strfin[j] == '1') {
////            num += pow(2, j);
////        }
////    }
////    return num;
////}
////
////int main() {
////    int decimalNumber = 1022; // пример числа в десятичном представлении
////    cout << decimalToBinary(decimalNumber) << endl;
////    cout << nextHigher(decimalNumber);
////    return 0;
////}
//
//std::string decimalToBinary(int decimal) {
//    if (decimal == 0)
//        return "0"; // если число равно 0, возвращаем "0"
//
//    std::string binary;
//    while (decimal > 0) {
//        // получаем остаток от деления на 2 и добавляем его к строке двоичного представления
//        binary = std::to_string(decimal % 2) + binary;
//        // делим на 2
//        decimal /= 2;
//    }
//    return binary;
//}
//
//std::string grille(std::string message, unsigned code)
//{
//    string strf = "";
//    string binary = decimalToBinary(code);
//    if (message.length() == 0) {
//        return "";
//    }
//    while (message.length() > binary.length()) {
//        binary = '0' + binary;
//    }
//    while (message.length() < binary.length()) {
//        message = ' ' + message;
//    }
//    for (int i = 0; i < binary.length(); i++){
//        if (binary[i] == '1' and message[i] != ' ') {
//            strf += message[i];
//        }
//    }
//    //auto start = std::find_if_not(str.begin(), str.end(), [](int c) {
//    //    return std::isspace(c);
//    //});
//    return strf;
//}
//
//int main() {
//    cout << grille("ab", 255);
//}


#include "test.h"

//class B;
//
//class A {
//public:
//    A() {
//        cout << "Construct A" << endl;
//    }
//    ~A() {
//        cout << "Destructor A" << endl;
//    }
//private:
//    static B b;
//};
//
//class B {
//public:
//    B() {
//        cout << "Construct B" << endl;
//    }
//    ~B() {
//        cout << "Destructor B" << endl;
//    }
//};
//
//B A::b;





//class A1 {
//private:
//    int num;
//public:
//    void getNum(int a) {
//        cout << a;
//    }
//};
//class B1 : public A1 {
//private:
//    int num;
//public:
//    void getNum(int a) {
//        cout << a;
//    }
//};
//
//
//class C1 : public A1 {
//private:
//    int num;
//public:
//    void getNum(int a) {
//        cout << a;
//    }
//};
//
//class D1 : public B1, public C1 {
//private:
//    int num;
//public:
//    void getNum(int a){
//        cout << a;
//    }
//};
//
//
//int main() {
//    D1 b;
//    b.getNum(5);
//}

#include <iostream>
#include <array>
//int main() {
        //std::array<std::array<int, 2>, 4> ar = {
    //        std::array<int, 2>{2, 6},
    //        std::array<int, 2>{1, 3},
    //        std::array<int, 2>{8, 11},
    //        std::array<int, 2>{15, 18}
    //    };

    //vector< vector<int >> new_mas = {};

    //std::array<int, 2> time = {};

    //sort(ar.begin(), ar.end());

    //for (auto it = ar.begin(); it != ar.end(); it++) {
    //    for (auto it2 = it; it != ar.end(); it++) {
    //        cout << it << " ";
    //    }
    //}
    // 
    // 
    //cout << "{ ";

////////    vector<pair<int, int>> ar = { {1, 7} , {2, 6} }; // {2, 3}, {1, 3}, {4, 9}, {8, 11}, {15, 18} 
////////    
////////    vector<pair<int, int>> new_mas = {};
////////
////////    sort(ar.begin(), ar.end());
////////
////////    int first = ar[0].first;
////////    int last = ar[0].second;
////////    int last_f = ar[0].second;
////////    int k = 0;
////////    //cout << ar.size();
////////    for (auto a : ar) {
////////
////////
////////        if (first == a.first and last == a.second) continue;
////////
////////        if (a.first <= last_f and a.second >= last_f and last >= a.first) {
////////            last_f = a.second;
////////            k++;
////////            continue;
////////        }
////////
////////        else if (k != 0){
////////            new_mas.push_back(make_pair(first, last_f));
////////            k = 0;
////////            first = a.first;
////////            last = a.second;
////////            last_f = a.second;
////////        }
////////
////////        else if (k == 0) {
////////            new_mas.push_back(make_pair(first, last));
////////            first = a.first;
////////            last = a.second;
////////            last_f = a.second;
////////        }
////////
////////        if (a == ar[ar.size() - 1]) {
////////            new_mas.push_back(make_pair(a.first, a.second));
////////        }
////////    }
////////    cout << "{ ";
////////    for (auto ch : new_mas) {
////////        cout << "{";
////////        cout << ch.first << ", " << ch.second;
////////        cout << "}" << " ";
////////    }
////////    cout << "}";
////////}


////////
////////
////////int main(){
////////    string str = "abcaafdsggadsbt";
////////    string time_str = "";
////////    string max_str = "";
////////    int k = 0;
////////    int min = 0;
////////    int max_k = 0;
////////    for (int i = 0; i < str.length() - 1; i++) {
////////        for (int j = i + 1; j < str.length(); j++) {
////////            if (time_str.length() == 0) {
////////                time_str += str[i];
////////            }
////////            if (find(time_str.begin(), time_str.end(), str[j]) == time_str.end()) {
////////                time_str += str[j];
////////            }
////////            else {
////////                if (time_str.length() > max_str.length()) {
////////                    max_str = time_str;
////////                    time_str = "";
////////                    break;
////////                }
////////                else {
////////                    time_str = "";
////////                    break;
////////                }
////////
////////            }
////////        
////////        }
////////    }
////////    //if (find(str.begin(), str.end(), 'a') != str.end()) {
////////    //    cout << "in!!!" << endl;
////////    //}
////////    //cout << str.substr(2, 2);
////////    cout << max_str;
////////}


//
//struct Node {
//	int data;
//	Node* next;
//
//	Node(int value) : data(value), next(nullptr) {}
//};
//
//void appendNode(Node*& head, int value) {
//	Node* new_node = new Node(value);
//	if (head == nullptr) {
//		head = new_node;
//	}
//	else {
//		Node* current = head;
//		while (current->next != nullptr) {
//			current = current->next;
//		}
//		current->next = new_node;
//	}
//}
//void pritsList(Node* head) {
//	Node* current = head;
//	while (current != nullptr) {
//		std::cout << current->data << " ";
//		current = current->next;
//	}
//	std::cout << std::endl;
//}
//
////void ListRer(Node*& head, int pos) {
////	int count = 1;
////	Node* current = head;
////	Node* NodePos = nullptr;
////	while (current->next != nullptr) {
////		if (count == pos - 1) {
////			NodePos = current->next;
////			current->next = nullptr;
////			break;
////		}
////		else {
////			current = current->next;
////			count++;
////		}
////	}
////	Node* tail = NodePos;
////	while (tail->next != nullptr) {
////		tail = tail->next;
////	}
////
////	 Переносим sublistStart в начало исходного списка
////	tail->next = head;
////	head = NodePos;
////}
//
////void AppendElement(Node*& head, int value) {
////
////	Node* current = head;
////	while (current->next != nullptr && current->next->data < value) {
////		current = current->next;
////	}
////
////	Node* cur_end = current->next;
////
////	Node* new_elem = new Node(value);
////
////	new_elem->next = current->next;
////
////	current->next = new_elem;
////}
////
////void DeleteRepitable(Node*& head) {
////	Node* current = head;
////
////	while (current != nullptr && current->next != nullptr) {
////		Node* time_node = current;
////		while (time_node->next != nullptr) {
////			if (time_node->next->data == current->data) {
////				time_node->next = time_node->next->next;
////				delete time_node->next;
////			}
////			else {
////				time_node = time_node->next;
////			}
////		}
////		current = current->next;
////	}
////}
////
////void removeDuplicates(Node*& head) {
////	Node* current = head;
////
////	while (current != nullptr && current->next != nullptr) {
////		Node* runner = current;
////
////		while (runner->next != nullptr) {
////			if (runner->next->data == current->data) {
////				Node* temp = runner->next;
////				runner->next = runner->next->next;
////				delete temp; // Освобождаем память удаленного узла
////			}
////			else {
////				runner = runner->next;
////			}
////		}
////
////		current = current->next;
////	}
////}
//
//
//
//
//Node* reverseList(Node* head) {
//	Node* prev = nullptr;
//	Node* current = head;
//	Node* next = nullptr;
//
//	while (current) {
//		next = current->next;
//		current->next = prev;
//		prev = current;
//		current = next;
//	}
//
//	return prev;
//}
//
//
////
////Node* reverseList(Node* head) {
////	Node* prev = nullptr;
////	Node* current = head;
////	Node* next = nullptr;
////	while (current != nullptr) {
////		next = current->next;
////		current->next = prev;
////		prev = current;
////		current = next;
////	}
////
////	return prev;
////}
//
//
////Node* reverse(struct Node* head)
////{
////	Node* curr, * next, * prev = nullptr;
////	if (head == NULL) return;
////	curr = head;
////	while (curr)
////	{
////		next = curr->next;
////		curr->next = prev;
////		prev = curr;
////		curr = next;
////	}
////	head = prev;
////}
//
//int main() {
//	Node* head = nullptr;
//
//	// Добавляем элементы в список: 1 -> 2 -> 3 -> 4 -> 5
//	appendNode(head, 1);
//	appendNode(head, 2);
//	appendNode(head, 3);
//	appendNode(head, 3);
//	appendNode(head, 2);
//
//	std::cout << "Ishodniy spisok:" << std::endl;
//	pritsList(head);
//
//	//int position = 3; // Позиция, с которой начинаем перемещение в начало списка
//	//ListRer(head, position);
//
//	//std::cout << "Posle peremesheniya: " << position << endl;
//	//pritsList(head);
//
//	//std::cout << "Posle appenda: " << endl;
//	//AppendElement(head, 5);
//	//pritsList(head);
//	//DeleteRepitable(head);
//
//	//std::cout << "Список после удаления всех повторяющихся элементов:" << std::endl;
//	//pritsList(head);
//
//	std::cout << "Reverse" << std::endl;
//	head = reverseList(head);
//	pritsList(head);
//	// Освобождаем выделенную память
//	Node* current = head;
//	while (current != nullptr) {
//		Node* temp = current;
//		current = current->next;
//		delete temp;
//	}
//
//	return 0;
//}


//
//vector<int> findUnique(vector<int>& nums) {
//
//    unique(nums.begin() + 1, nums.end(), 4);
//    return nums;
//}
//
////int factorial(int a) {
////    if (a == 1) {
////        return a;
////    }
////    else return a * factorial(a - 1);
//int main() {
//    vector<int> a = { 4,5,4,5,1,2,1 };
//    //int sum_xor = 0;
//    //for (auto a1 : a) {
//    //    sum_xor ^= a1;
//    //}
//    //cout << factorial(5) << endl;
//
//    for (auto a1 : findUnique(a)) {
//        cout << a1 << " ";
//    }
//   // cout << sum_xor;
//}
//
//struct Base {
//    explicit Base(int a) : a_1(a) { cout << "Base ctr" << endl; }
//    void print() {
//        cout << "print Base" << endl;
//    }
//    virtual ~Base() {
//        cout << "Base destructor" << endl;
//    }
//private:
//    int a_1;
//};
//
//struct Digit: Base {
//    Digit() { cout << "Digit ctr" << endl; }
//    virtual void print() {
//        cout << "print Digit" << endl;
//    }
//    virtual ~Digit() {
//        cout << "Digit destructor" << endl;
//    }
//};
//
//int main() {
//    int a = 5;
//    Base base1 = 1;
//    Base* base = new Digit();
//    base->print();
//    delete base;
//}\
//


#include <vector>
//
//int score(const std::vector<int>& dice) {
//    map<int, int> game = {};
//    for (auto a : dice) {
//        game.insert(a,a);
//    }
//    
//}
//
//int main() {
//    const std::vector<int> dice = { 2, 4, 4, 5, 4 };
//    std::map<std::string, int> game;
//    int sum = 0;
//    for (auto a : dice) {
//        game.insert(std::make_pair(std::to_string(a), count(dice.begin(), dice.end(), a)));
//    }
//    for (const auto& a : game) {
//        int count = a.second;
//        while (count != 0) {
//            if (count >= 3 and stoi(a.first) != 1) {
//                sum += stoi(a.first) * 100;
//                count = count - 3;
//            }
//            else if (stoi(a.first) == 1 and count >= 3) {
//                sum += 1000;
//                count = count - 3;
//            }
//            else if (stoi(a.first) == 5) {
//                sum += 50;
//                count = count - 1;
//            }
//            else if (stoi(a.first) == 1) {
//                sum += 100;
//                count = count - 1;
//            }
//            else {
//                count = 0;
//                continue;
//            }
//        }
//        /*std::cout << a.first << " " << a.second << std::endl;*/
//    }
//    cout << sum;
//    return 0;
//}

//class Kata
//{
//public:
//    std::vector<int> sortArray(std::vector<int> array)
//    {
//        return array;
//    }
//};


//int main() {
//    std::vector<int> sortArray = { 8, 5, 3, 4 , 1 };
//    int k = sortArray.size();
//    auto it_time = sortArray.begin();
//    while (k != 0) {
//        k = sortArray.size();
//        for (vector<int>::iterator it = sortArray.begin(); it != sortArray.end(); it++) {
//            if (*it % 2 != 0) {
//                if (it_time == sortArray.begin()) {
//                    it_time = it;
//                    *it_time = *it;
//                    k--;
//                }
//                else if (*it_time > *it) {
//                    //swap(it, it_time);
//                    swap(*it, *it_time);
//                    swap(it,it_time);
//                }
//                else {
//                    k--;
//                }
//            }
//            else {
//                k--;
//            }
//            if (k == 0) {
//                break;
//            }
//        }
//        if (k != 0) {
//            continue;
//        }
//    }
//    for (auto a : sortArray) {
//        cout << a << " ";
//    }
//}

//int main() {
//    std::vector<int> sortArray = { 8, 5, 3, 4 , 1 };
//    std::vector<int> OddNums = {};
//    
//    for (vector<int>::iterator it = sortArray.begin(); it != sortArray.end(); it++) {
//        if (*it % 2 != 0 ) {
//            OddNums.push_back(*it);
//            *it = -1;
//        }
//    }
//    sort(OddNums.begin(), OddNums.end());
//    for (vector<int>::iterator it1 = sortArray.begin(); it1 != sortArray.end(); it1++) {
//        if (*it1 == -1) {
//            *it1 = OddNums[0];
//            OddNums.erase(OddNums.begin());
//        }
//    }
//    for (auto a : sortArray) {
//        cout << a << " ";
//    }
//}




/* for (vector<int>::iterator it = sortArray.begin(); it != sortArray.end(); it++) {
     if (*it % 2 != 0 && k == 1) {
         *it_time = *it;
          k++;
     }
     else if (*it % 2 != 0 && *it_time > *it && k != 1) {
         swap(*it, *it_time);
         k++;
     }
 }*/
#include <cmath>
//int main() {
//    std::vector<int> sortArray = { 8, 5, 3, 4 , 1 };
//    auto it = sortArray.begin();
//    vector<int> summary = {};
//    int sum = 0;
//    while (it != sortArray.end()) {
//        sum += *it;
//        summary.push_back(sum);
//        it++;
//    }
//    for (auto a : summary) {
//        cout << a << " ";
//    }
//    
//}


//int main() {
//    int n = 12;
//    int fac = 0;
//    int sum = 0;
//    for (int i = 1; i <= (log(n) / log(5)); i++) {
//        fac += n / pow(5, i);
//    }
//    cout << fac;
//}

//vector<int> func(int a) {
//    vector<int> ch = {};
//    while (a >= 1) {
//        ch.push_back(a % 2);
//        a /= 2;
//    }
//    reverse(ch.begin(), ch.end());
//            //ch.push_back(a);
//    return ch;
//}
//
//int main() {
//    int a = 217;
//    vector<int> dp = func(a);
//    int count = 0;
//    for (auto a : dp) {
//        if (a == 1) {
//            count++;
//        }
//    }
//    cout << count;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void generate_combinations(const string& s, int index, string current_combination, vector<string>& results) {
//    if (index == s.size()) {
//        results.push_back(current_combination);
//        return;
//    }
//
//    // Вариант с оставлением текущего символа
//    generate_combinations(s, index + 1, current_combination + s[index], results);
//
//    // Вариант с вычеркиванием текущего символа
//    generate_combinations(s, index + 1, current_combination + '-', results);
//}
//
//vector<string> generate_all_combinations(const string& s) {
//    vector<string> results;
//    generate_combinations(s, 0, "", results);
//    return results;
//}
//
//int main() {
//    string word = "bnnannbnbbbaannanbbna";
//    vector<string> combinations = generate_all_combinations(word);
//    set<string> words = {};
//    string word_time = "";
//    string word_time_final = "";
//    int count = 0;
//    // Выводим все полученные комбинации
//    for (const string& combo : combinations) {
//        for (int i = 0; i < combo.length(); i++) {
//            word_time_final += combo[i];
//            if (combo[i] != '-') {
//                word_time += combo[i];
//            }
//            if (i == combo.size() - 1) {
//                if (word_time == "banana") {
//                    words.insert(word_time_final);
//                    word_time = "";
//                    word_time_final = "";
//                }
//                else {
//                    word_time = "";
//                    word_time_final = "";
//                }
//            }
//        }
//    }
//    for (auto a1 : words) {
//        cout << a1 << endl;
//    }
//    return 0;
//}


//
//1, 0, 0, 0, 0, 0, 0, 0],
//[0, 0, 0, 0, 0, 0, 0, 0],
//[0, -1, 0, 0, 1, 0, 0, 0],
//[0, 0, 0, 0, 0, 0, 0, 0],
//[0, 0, 0, 0, 0, 0, 0, 0],
//[0, 0, 0, -1, -1, 0, 0, 0],
//[0, 0, 0, 0, 0, 0, 0, 0],
//[0, 0, 0, 0, 0, 0, 0, 0]


//int main() {
//    std::array<std::array<int, 8>, 8> chessboard = { {
//        {1, 0, 0, 1, 0, 0, 0, 0},
//        {0, 0, 0, 0, 0, 0, 0, 0},
//        {0, -1, 0, 0, 1, 0, 0, 0},
//        {0, 0, 0, 0, 0, 0, 0, 0},
//        {0, 0, 0, 0, 0, 0, 0, 0},
//        {0, 0, 0, -1, -1, 0, 0, 0},
//        {0, 0, 0, 0, 0, 0, 0, 0},
//        {0, 0, 0, 0, 0, 0, 0, 0}
//    } };
//
//    for (int i = 0; i < 8; i++) {
//        for (int j = 0; j < 8; j++) {
//            if (chessboard[i][j] == 1) {
//                int i_down = i +1;
//                int i_right = j + 1;
//                int i_up = i - 1;
//                int i_left = j - 1;
//                //int j_n = j;
//                while (i_down != 8) {
//                    if (chessboard[i_down][j] == 0 || chessboard[i_down][j] > 1) {
//                        chessboard[i_down][j] = 8;
//                        i_down++;
//                    }
//                    else {
//                        break;
//                    }
//                }
//                while (i_right != 8) {
//                    if (chessboard[i][i_right] == 0 || chessboard[i][i_right] > 1) {
//                        chessboard[i][i_right] = 8;
//                        i_right++;
//                    }
//                    else {
//                        break;
//                    }
//                }
//                while (i_up > -1) {
//                    if (chessboard[i_up][j] == 0 || chessboard[i_up][j] > 1) {
//                        chessboard[i_up][j] = 8;
//                        i_up--;
//                    }
//                    else {
//                        break;
//                    }
//                }
//                while (i_left > -1) {
//                    if (chessboard[i][i_left] == 0 || chessboard[i][i_left] > 1) {
//                        chessboard[i][i_left] = 8;
//                        i_left--;
//                    }
//                    else {
//                        break;
//                    }
//                }
//            }
//            else if (chessboard[i][j] == -1) {
//                int bish_right_up_i = i - 1;
//                int bish_right_up_j = j + 1;
//
//                int bish_right_down_i = i + 1;
//                int bish_right_down_j = j + 1;
//
//                int bish_left_down_i = i + 1;
//                int bish_left_down_j = j - 1;
//
//                int bish_left_up_i = i - 1;
//                int bish_left_up_j = j - 1;
//
//                while (bish_right_up_i > -1 && bish_right_up_j != 8) {
//
//                    if ((chessboard[bish_right_up_i][bish_right_up_j] == 0 || chessboard[bish_right_up_i][bish_right_up_j] > 1)){
//                        chessboard[bish_right_up_i][bish_right_up_j] = 8;
//                        bish_right_up_i--;
//                        bish_right_up_j++;
//                    }
//                    else {
//                        break;
//                    }
//                }
//
//                while (bish_right_down_i != 8 && bish_right_down_j != 8) {
//
//                    if ((chessboard[bish_right_down_i][bish_right_down_j] == 0 || chessboard[bish_right_down_i][bish_right_down_j] > 1)) {
//                        chessboard[bish_right_down_i][bish_right_down_j] = 8;
//                        bish_right_down_i++;
//                        bish_right_down_j++;
//                    }
//                    else {
//                        break;
//                    }
//                }
//
//                while (bish_left_down_i != 8 && bish_left_down_j > - 1) {
//
//                    if ((chessboard[bish_left_down_i][bish_left_down_j] == 0 || chessboard[bish_left_down_i][bish_left_down_j] > 1)) {
//                        chessboard[bish_left_down_i][bish_left_down_j] = 8;
//                        bish_left_down_i++;
//                        bish_left_down_j--;
//                    }
//                    else {
//                        break;
//                    }
//                }
//
//                while (bish_left_up_i > -1 && bish_left_up_j > -1) {
//
//                    if ((chessboard[bish_left_up_i][bish_left_up_j] == 0 || chessboard[bish_left_up_i][bish_left_up_j] > 1)) {
//                        chessboard[bish_left_up_i][bish_left_up_j] = 8;
//                        bish_left_up_i--;
//                        bish_left_up_j--;
//                    }
//                    else {
//                        break;
//                    }
//                }
//            }
//        }
//    }
//    int count = 0;
//    for (int k = 0; k < 8; k++) {
//        for (int m = 0; m < 8; m++) {
//            cout << chessboard[k][m] << " ";
//            if (chessboard[k][m] == 0) {
//                count++;
//            }
//        }
//        cout << endl;
//    }
//    cout << count;
//}

//#include <iostream>
//#include <string>
//#include <cmath>
//
//int findMissingNumber(const std::string& sequence) {
//    int n = sequence.size();  // Получаем длину строки
//
//    // Проверяем все возможные длины числа (1, 2, 3, ... до половины длины строки)
//    for (int length = 1; length <= n / 2; ++length) {
//        bool foundMissing = false;  // Флаг для обозначения нахождения пропущенного числа
//        int missingNumber = -1;  // Инициализируем переменную для хранения пропущенного числа
//        int prevNumber = std::stoi(sequence.substr(0, length));  // Преобразуем первый кусок строки в число
//
//        for (int i = length; i < n;) {  // Проходимся по остальной части строки
//            int expectedNextNumber = prevNumber + 1;  // Ожидаемое следующее число
//            int expectedLength = std::to_string(expectedNextNumber).length();  // Длина ожидаемого числа
//
//            if (i + expectedLength > n) {
//                break;  // Достигли конца строки
//            }
//
//            int nextNumber = std::stoi(sequence.substr(i, expectedLength));  // Преобразуем следующий кусок строки в число
//
//            if (nextNumber == expectedNextNumber) {
//                prevNumber = nextNumber;  // Обновляем предыдущее число
//                i += expectedLength;  // Переходим к следующему числу
//            }
//            else if (!foundMissing && nextNumber == expectedNextNumber + 1) {
//                foundMissing = true;  // Обнаружили пропущенное число
//                missingNumber = expectedNextNumber;  // Сохраняем пропущенное число
//                prevNumber = nextNumber;  // Обновляем предыдущее число
//                i += expectedLength;  // Переходим к следующему числу
//            }
//            else {
//                foundMissing = false;  // Последовательность нарушена
//                break;  // Выходим из цикла
//            }
//        }
//
//        if (foundMissing) {
//            return missingNumber;  // Возвращаем найденное пропущенное число
//        }
//    }
//
//    return -1;  // Если пропущенное число не найдено, возвращаем -1
//}
//
//int main() {
//    std::cout << findMissingNumber("123567") << std::endl;          // 41
//    std::cout << findMissingNumber("899091939495") << std::endl;    // 92
//    std::cout << findMissingNumber("9899101102") << std::endl;      // 100
//    std::cout << findMissingNumber("599600601602") << std::endl;    // -1
//    std::cout << findMissingNumber("8990919395") << std::endl;      // -1
//
//    return 0;
//}

#include "Wall.h"
#include <stdio.h>
#include <cstdlib>
   // для подключения функции malloc

//int c = 10;
//
//
//class A {
//private:
//    int a;
//public:
//    A() = default;
//    A(int a) {
//        this->a = a;
//    }
//    virtual void getA() = 0;
//};
//
//class B : public A {
//private:
//    int b;
//public:
//    B(int b) {
//        this->b = b;
//    }
//    void getA() override {
//        cout << b;
//    }
//};

#include <chrono>
using namespace std;
//int main() {
   // //A a(12);
   //// a.getA();
   // B b(15);
   // b.getA();


    //int a = 15;
    //const int& b = a;
    //const_cast<int&>(b) = 105;
    ////b = 105;
    //cout << b;

    //int a[] = {1,2,3,4};
    //int b = (a - 1)[3];
    //cout << b;

    //char c = '123';

    //cout << *((int*)c);

    //int mas[] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};

    //auto tStartSteady = std::chrono::steady_clock::now();
    //std::time_t startWallTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    //std::cout << size(mas) << endl;

    //int middle = size(mas) / 2 -  1;
    //while (mas[middle + 1] != 0) {
    //    //std::cout << middle << endl;
    //    middle /= 2;
    //}
    ////std::cout << endl;
    ////std::cout << mas[middle];

    //for (int a = mas[middle]; mas[a] != 1; a++) {
    //    if (mas[a + 1] == 1) {
    //        std::cout << a << endl;
    //    }
    //}

    ////for (int i = 0; i < size(mas); i++) {
    ////    if (mas[i] == 1) {
    ////        cout << i - 1 << endl;
    ////        break;
    ////    }
    ////}

    //auto tEndSteady = std::chrono::steady_clock::now();
    //chrono::nanoseconds diff = tEndSteady - tStartSteady;

    //std::cout << diff.count();
    ////b = ptr;
    //cout << c << endl;
    //cout << qwerty << endl;

    ////int* a = new int(15);
    ////cout << *a;


    //int* ptr = (int*)malloc(sizeof(int));
    //*ptr = 24;

    //cout << *ptr;

    //const int test = 12;

    //const int x = 42;
    //const int* pcx = &x;
    ////*pcx = 0; // ошибка
    //pcx = nullptr; // OK
    //cout << endl;

    //const int& f = test;

    ////f = 0;

    ////*f = 0;


    //cout <<  f;


    //int* test = 0x00aaff;

    //test += 10 ;
    ////const int* a = &test;

    //std::cout << endl;

    //cout << sizeof(test);

    //int a[] = { 1,2,3,4 };

    //int b = 2[a + 1]; // a[2+ // * (a + i) 
    // 
    //int c = (a + 1)[2];
    //cout << b;

    //const vector<int>& vec = { 2,7,2,12,7,3,-1,6,3 };
    //auto it = max_element(vec.begin(), vec.end());
    //cout << *it << endl;



//}

//class A {
//private:
//    int a, b;
//    int* ptr_object = nullptr;
//public:
//    explicit A(int a1, int b1, int* ptr_object1) {
//        a = a1;
//        b = b1;
//        ptr_object = ptr_object1;
//    }
//
//    virtual int calculated() {
//        return a * b;
//    }
//
//    virtual int* getptr() {
//        *ptr_object = calculated();
//        return ptr_object;
//    }
//    void func() {
//        cout << "we're in a class";
//    }
//
//};
//
//int main() {
//    //std::shared_ptr<A> ptr1 = std::make_shared<A>();
//    //std::shared_ptr<A> ptr2 = ptr1;
//    ////ptr_u->func();
//    ////std::cout << endl;
//    ////std::unique_ptr<A> ptr_u2 = ptr_u;
//    ////ptr1->func();
//    ////std::cout << endl;
//    ////cout << ptr1.use_count();
//    ////std::cout << endl;
//    ////ptr2->func();
//    ////std::cout << endl;
//    ////cout << ptr2.use_count();
//
//    int* ptr__auto = new int;
//
//    std::unique_ptr<A> ptr_u = std::make_unique<A>(12,5,ptr__auto);
//    //cout << ptr_w.use_count();
//    cout << ptr_u->calculated();
//    std::cout << endl;
//    cout << *(ptr_u->getptr());
//    std::cout << endl;
//
//    delete ptr__auto;
//}

//A* ptr = new A();

//delete ptr;

#include <chrono>
#include <mutex>
#include <thread>
using namespace std;

//int summary(int a, int b) {
//    mutex m;
//    lock_guard<mutex> g(m);
//    std::this_thread::sleep_for(chrono::milliseconds(3000));
//    cout << "Start summary...";
//    cout << this_thread::get_id() << endl;
//    std::this_thread::sleep_for(chrono::milliseconds(5000));
//    cout << "End summary...";
//    return a + b;
//}

//
//void stepen(int a, int& res) {
//    mutex m;
//    std::this_thread::sleep_for(chrono::milliseconds(3000));
//    lock_guard<mutex> g(m);
//    cout << "Start stepen...";
//    cout << this_thread::get_id() << endl;
//    a *= a;
//    res = a;
//    std::this_thread::sleep_for(chrono::milliseconds(3000));
//    cout << "End stepen...";
//}
//
////
////class thA {
////public:
////    int summary(int a, int b) {
////        cout << "Start summary...";
////        cout << this_thread::get_id() << endl;
////        std::this_thread::sleep_for(chrono::milliseconds(6000));
////        return a + b;
////        //cout << "End summary..." << endl;
////    }
////
////
////    void stepen(int a) {
////        cout << "Start stepen...";
////        cout << this_thread::get_id() << endl;
////        std::this_thread::sleep_for(chrono::milliseconds(7000));
////        a *= a;
////        cout << "class stepen = " << a << endl;
////    }
////};
//
//
//int main() {
//    int a = 10;
//    int b = 15;
//
//    int a1 = 4;
//
//    //int res = 0;
//    int result = 0;
//    int result2 = 0;
//    //int result4 = 0;
//
//    //thA obj;
//
//    //thread th([a, b, &res]() {res = summary(a, b); });
//
//    //thread th2(stepen, a1, ref(result));
//
//    //thread th3([&]() {obj.stepen(4); });
//
//    //thread th4([&result4, a, b, &obj]() {result4 = obj.summary(a, b); });
//    //for (int i = 0; i < 10; i++)
//    //{
//    //    cout << this_thread::get_id() << " " << i << " " << endl;
//    //    std::this_thread::sleep_for(chrono::milliseconds(500));
//    //}
//    //cout << endl;
//    //th.join();
//    //cout << res << endl;
//
//    //th2.join();    cout << result;
//
//    //th3.join();
//
//    //cout << endl;
//    //th4.join();
//    //cout << result4;
//
//    thread th1([&result, a]() {stepen(a,result); });
//    thread th2([&result2, a1]() {stepen(a1,result2); });
//
//    th1.join();
//    cout << result << endl;
//    th2.join();
//    cout << result2 << endl;
//    return 0;
//}



////////////struct Node {
////////////    int data;
////////////    Node* next;
////////////    Node* prev;
////////////    Node(int data) {
////////////        this->next = this->prev = nullptr;
////////////        this->data = data;
////////////    }
////////////};
////////////
////////////class LinkedList {
////////////private:
////////////    Node* head, * tail;
////////////public:
////////////    Node* push_back(int data) {
////////////        Node* ptr = new Node(data);
////////////        ptr->prev = tail;
////////////        if (tail != NULL) {
////////////            tail->next = ptr;
////////////        }
////////////        if (head == nullptr) {
////////////            head = ptr;
////////////        }
////////////        tail = ptr;
////////////        return ptr;
////////////    }
////////////
////////////    Node* push_front(int data) {
////////////        Node* ptr = new Node(data);
////////////        ptr->next = head;
////////////        if (head != nullptr) {
////////////            head->prev = ptr;
////////////        }
////////////        if (tail == nullptr) {
////////////            tail = ptr;
////////////        }
////////////        head = ptr;
////////////        return ptr;
////////////    }
////////////
////////////    void pop_back() {
////////////        if (head != nullptr) {
////////////            tail->prev = tail;
////////////            delete tail;
////////////        }
////////////        else {
////////////            return;
////////////        }
////////////    }
////////////};
//
//vector<int> twoSum(vector<int> nums, int target) {
//    vector<int> v = {};
//    sort(nums.begin(), nums.end());
//    for (int i = 0; nums[i] < target; i++) {
//        for (int j = i + 1; nums[j] < target; j++) {
//            if (nums[i] + nums[j] == target) {
//                v.push_back(i);
//                v.push_back(j);
//                break;
//            }
//        }
//        if (v.size() == 2) {
//            break;
//        }
//    }
//    return v;
//}
//
//int main() {
//    for (auto a : twoSum({ 3,9,7,4,7,7,35,5,7,2,1,36,8,3 }, 6)) {
//        cout << a << " ";
//    }
//}
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//void delFirstMethod(std::vector<int>& x, int& n, int key) {
//    int i = 0;
//    while (i < n) {
//        if (x[i] == key) {
//            for (int j = i; j < n - 1; ++j) {
//                x[j] = x[j + 1];
//            }
//            x.resize(x.size() - 1);
//            --n; // Уменьшение размера массива
//        }
//        else {
//            ++i;
//        }
//    }
//    for (auto a : x) {
//        cout << a << " ";
//    }
//}
//
//void delOtherMethod(std::vector<int>& x, int& n, int key) {
//    int j = 0;
//    for (int i = 0; i < n; ++i) {
//        if (x[i] != key) {
//            x[j] = x[i];  // Копируем только нужные элементы
//            ++j;
//        }
//    }
//    n = j;  // Новый размер массива
//    for (auto a : x) {
//        cout << a << " ";
//    }
//}
//
//
//int main() {
//    vector<int> vec = { 1,2,2,3,4,5,2,5,6,8 };
//    vector<int> vec2 = { 1,2,2,3,4,5,2,5,6,8 };
//    int s = vec.size();
//    delFirstMethod(vec, s, 2);
//    cout << endl;
//    delOtherMethod(vec2, s, 2);
//}


//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//void delFirstMethod(int*& x, int& n, int key, int& comparisons, int& shifts) {
//    int i = 0;
//    while (i < n) {
//        comparisons++;  // Увеличиваем счетчик сравнений
//        if (x[i] == key) {
//            for (int j = i; j < n - 1; ++j) {
//                x[j] = x[j + 1];
//                shifts++;  // Увеличиваем счетчик перемещений
//            }
//            n--;
//        }
//        else {
//            i++;
//        }
//    }
//}
//
//void delOtherMethod(int*& x, int& n, int key, int& comparisons, int& assignments) {
//    int j = 0;
//    for (int i = 0; i < n; ++i) {
//        comparisons++;  // Увеличиваем счетчик сравнений
//        if (x[i] != key) {
//            x[j] = x[i];
//            assignments++;  // Увеличиваем счетчик перемещений
//            j++;
//        }
//    }
//    n = j;
//    //x.resize(j);
//}
//
//void fillArray(int*& arr, int n) {
//    srand(time(0));
//    for (int i = 0; i < n; ++i) {
//        arr[i] = rand() % 10;  // Заполняем массив случайными числами от 0 до 9
//    }
//}
//
//void printArray(const int* arr, int n) {
//    for (int i = 0; i < n; ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//
//int main() {
//    // Инициализация переменных
//    int n = 10;  // Размер массива
//    int key = 2;  // Ключевое значение для удаления
//    int comparisons = 0, shifts = 0, assignments = 0;
//
//    // Динамическое создание массива
//    int* arr = new int[n];
//    fillArray(arr, n);
//
//    std::cout << "Alg 1 n=10: ";
//    printArray(arr, n);
//
//    // Тестирование алгоритма 1
//    delFirstMethod(arr, n, key, comparisons, shifts);
//    std::cout << "After delFirstMethod: ";
//    printArray(arr, n);
//    std::cout << "Sravneniy: " << comparisons << ", Peremesheniy: " << shifts << std::endl;
//
//    // Тестирование алгоритма 2
//    comparisons = shifts = assignments = 0;  // Сброс счетчиков
//    fillArray(arr, 10);  // Перезаполняем массив
//    std::cout << "Alg2 n=10: ";
//    printArray(arr, 10);
//
//    delOtherMethod(arr, n, key, comparisons, assignments);
//    std::cout << "After delOtherMethod: ";
//    printArray(arr, n);
//    std::cout << "Sravneniy: " << comparisons << ", Prisvaivnei: " << assignments << std::endl;
//
//    // Удаление динамического массива
//    delete[] arr;
//
//    // Тестирование на большем массиве (n=100)
//    n = 100;
//    arr = new int[n];
//    fillArray(arr, n);
//
//    std::cout << "Alg1 n=100: ";
//    printArray(arr, n);
//
//    comparisons = shifts = 0;
//    delFirstMethod(arr, n, key, comparisons, shifts);
//    std::cout << "After delFirstMethod with n=100: ";
//    printArray(arr, n);
//    std::cout << "Sravneniy: " << comparisons << ", Peremesheniy: " << shifts << std::endl;
//
//    comparisons = shifts = assignments = 0;
//    fillArray(arr, 100);
//    std::cout << "Alg2 n=100: ";
//    printArray(arr, 100);
//
//    delOtherMethod(arr, n, key, comparisons, assignments);
//    std::cout << "After delFirstMethod with n=100: ";
//    printArray(arr, n);
//    std::cout << "Sravneniy: " << comparisons << ", Prisvaivnei: " << assignments << std::endl;
//    // Удаление динамического массива
//    delete[] arr;
//
//    return 0;
//}

//
//#include <iostream>
//#include <vector>
//
//int countMaxValueOccurrences(const std::vector<int>& arr) {
//    if (arr.empty()) return 0;
//
//    int max_value = arr[0]; // первое максимальное значение
//    int count = 1; // первое вхождение
//
//    // Нахождение максимального значения
//    for (size_t i = 1; i < arr.size(); ++i) {
//        if (arr[i] > max_value) {
//            max_value = arr[i];
//            count = 1; // обнуление счетчика
//        }
//        else if (arr[i] == max_value) {
//            ++count;
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    std::vector<int> arr1 = { 1, 3, 2, 3, 3, 5, 3 }; // тест 1
//    std::vector<int> arr2 = { 5, 5, 5, 5 }; // тест 2
//    std::vector<int> arr3 = { -1, -2, -3, -4 }; // тест 3
//    std::vector<int> arr4 = { 0, 1, 0, 1, 1, 1 }; // тест 4
//    std::vector<int> arr5 = { 10 }; // тест 5
//    std::vector<int> arr6 = { -5, -5, -10, -1 }; // тест 6
//    //for (auto a : arr) {
//    //    cout << a << " ";
//    //}
//    int result1 = countMaxValueOccurrences(arr1);
//    std::cout << "Max value count " << result1 << " times." << std::endl;
//    int result2 = countMaxValueOccurrences(arr2);
//    std::cout << "Max value count " << result2 << " times." << std::endl;
//    int result3 = countMaxValueOccurrences(arr3);
//    std::cout << "Max value count " << result3 << " times." << std::endl;
//    int result4 = countMaxValueOccurrences(arr4);
//    std::cout << "Max value count " << result4 << " times." << std::endl;
//    int result5 = countMaxValueOccurrences(arr5);
//    std::cout << "Max value count " << result5 << " times." << std::endl;
//    int result6 = countMaxValueOccurrences(arr6);
//    std::cout << "Max value count " << result6 << " times." << std::endl;
//}









//
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//
//vector<int> shakerSort(std::vector<int> arr) {
//
//    bool swapped = true;
//    int start = 0;
//    int end = arr.size() - 1;
//
//
//    while (swapped) {
//        swapped = false;
//
//        // Проход слева направо
//        for (int i = start; i < end; ++i) {
//            if (arr[i] > arr[i + 1]) {
//                std::swap(arr[i], arr[i + 1]);
//                swapped = true;
//            }
//        }
//        if (!swapped) break;
//
//        swapped = false;
//        --end;
//
//        // Проход справа налево
//        for (int i = end - 1; i >= start; --i) {
//            if (arr[i] > arr[i + 1]) {
//                std::swap(arr[i], arr[i + 1]);
//                swapped = true;
//            }
//        }
//        ++start;
//    }
//    return arr;
//}
//
//vector<int> fillArray(std::vector<int> arr, int n) {
//    srand(time(0));
//    for (int i = 0; i < n; ++i) {
//        arr.push_back(rand() % 10);  // Заполняем массив случайными числами от 0 до 9
//    }
//    return arr;
//}
//
//void printArray(std::vector<int> arr) {
//    for (int i = 0; i < arr.size(); ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    vector<int> vec = {};
//    vector<int> vec1 = {};
//    vector<int> vec2 = {};
//    vector<int> vec3 = {};
//    vector<int> vec4 = {};
//    vector<int> vec5 = {};
//
//    int n = 10;
//    cout << "10 elements" << endl;
//    vec = fillArray(vec, n);
//    //printArray(vec);
//    cout << "Sorted 10 elements";
//    auto start = std::chrono::steady_clock::now();
//    auto stop = start;
//    vec = shakerSort(vec);
//    cout << endl;
//    //printArray(vec);
//    auto end = std::chrono::steady_clock::now();
//    auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
//    cout << "Time ms: " << diff << endl;
//
//    cout << "------------------------------------------------------------" << endl;
//
//    int n1 = 100;
//    cout << "100 elements" << endl;
//    vec1 = fillArray(vec1, n1);
//    //printArray(vec1);
//    cout << "Sorted 100 elements";
//    auto start1 = std::chrono::steady_clock::now();
//    auto stop1 = start1;
//    vec1 = shakerSort(vec1);
//    cout << endl;
//    //printArray(vec1);
//
//    auto end1 = std::chrono::steady_clock::now();
//    auto diff1 = std::chrono::duration_cast<std::chrono::milliseconds>(end1 - start1).count();
//    cout << "Time ms: " << diff1 << endl;
//
//    cout << "------------------------------------------------------------" << endl;
//
//    int n2 = 1000;
//    cout << "1000 elements" << endl;
//    vec2 = fillArray(vec2, n2);
//    //printArray(vec2);
//    cout << "Sorted 1000 elements";
//    auto start2 = std::chrono::steady_clock::now();
//    auto stop2 = start2;
//    vec2 = shakerSort(vec2);
//    cout << endl;
//    //printArray(vec2);
//
//    auto end2 = std::chrono::steady_clock::now();
//    auto diff2 = std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2).count();
//    cout << "Time ms: " << diff2 << endl;
//
//    cout << "------------------------------------------------------------" << endl;
//
//    int n3 = 10000;
//    cout << "10000 elements" << endl;
//    vec3 = fillArray(vec3, n3);
//    //printArray(vec2);
//    cout << "Sorted 10000 elements";
//    auto start3 = std::chrono::steady_clock::now();
//    auto stop3 = start3;
//    vec3 = shakerSort(vec3);
//    cout << endl;
//    //printArray(vec2);
//
//    auto end3 = std::chrono::steady_clock::now();
//    auto diff3 = std::chrono::duration_cast<std::chrono::milliseconds>(end3 - start3).count();
//    cout << "Time ms: " << diff3 << endl;
//
//    cout << "------------------------------------------------------------" << endl;
//
//    int n4 = 100000;
//    cout << "100000 elements" << endl;
//    vec4 = fillArray(vec4, n4);
//    //printArray(vec2);
//    cout << "Sorted 100000 elements";
//    auto start4 = std::chrono::steady_clock::now();
//    auto stop4 = start4;
//    vec4 = shakerSort(vec4);
//    cout << endl;
//    //printArray(vec2);
//
//    auto end4 = std::chrono::steady_clock::now();
//    auto diff4 = std::chrono::duration_cast<std::chrono::milliseconds>(end4 - start4).count();
//    cout << "Time ms: " << diff4 << endl;
//}





//#include <iostream>
//#include <vector>
//#include <cstdlib>
//
//void swap(vector<int> arr, int pos1, int pos2) {
//    int temp;
//    temp = arr[pos1];
//    arr[pos1] = arr[pos2];
//    arr[pos2] = temp;
//}
//
//int partition(vector<int> arr, int low, int high, int pivot) {
//    int i = low;
//    int j = low;
//    while (i <= high) {
//        if (arr[i] > pivot) {
//            i++;
//        }
//        else {
//            swap(arr, i, j);
//            i++;
//            j++;
//        }
//    }
//    return j - 1;
//}
//
//vector<int> quickSort(vector<int> arr, int low, int high) {
//    if (low < high) {
//        int pivot = arr[high];
//        int pos = partition(arr, low, high, pivot);
//
//        quickSort(arr, low, pos - 1);
//        quickSort(arr, pos + 1, high);
//    }
//
//    return arr;
//}
//
//
//vector<int> fillArray(std::vector<int> arr, int n) {
//    srand(time(0));
//    for (int i = 0; i < n; ++i) {
//        arr.push_back(rand() % 10);  // Заполняем массив случайными числами от 0 до 9
//    }
//    return arr;
//}
//
//void printArray(std::vector<int> arr) {
//    for (int i = 0; i < arr.size(); ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    vector<int> vec = {};
//    vector<int> vec1 = {};
//    vector<int> vec2 = {};
//    vector<int> vec3 = {};
//    vector<int> vec4 = {};
//    vector<int> vec5 = {};
//
//    int n = 10;
//    cout << "10 elements" << endl;
//    vec = fillArray(vec, n);
//    //printArray(vec);
//    cout << "Sorted 10 elements";
//    auto start = std::chrono::steady_clock::now();
//    auto stop = start;
//    vec = quickSort(vec,0, vec.size() - 1);
//    cout << endl;
//    //printArray(vec);
//    auto end = std::chrono::steady_clock::now();
//    auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
//    cout << "Time ms: " << diff << endl;
//
//    cout << "------------------------------------------------------------" << endl;
//
//        int n1 = 100;
//        cout << "100 elements" << endl;
//        vec1 = fillArray(vec1, n1);
//        //printArray(vec1);
//        cout << "Sorted 100 elements";
//        auto start1 = std::chrono::steady_clock::now();
//        auto stop1 = start1;
//        vec1 = quickSort(vec1, 0, vec1.size() - 1);
//        cout << endl;
//        //printArray(vec1);
//    
//        auto end1 = std::chrono::steady_clock::now();
//        auto diff1 = std::chrono::duration_cast<std::chrono::milliseconds>(end1 - start1).count();
//        cout << "Time ms: " << diff1 << endl;
//    
//        cout << "------------------------------------------------------------" << endl;
//    
//        int n2 = 1000;
//        cout << "1000 elements" << endl;
//        vec2 = fillArray(vec2, n2);
//        //printArray(vec2);
//        cout << "Sorted 1000 elements";
//        auto start2 = std::chrono::steady_clock::now();
//        auto stop2 = start2;
//        vec2 = quickSort(vec2, 0, vec2.size() - 1);
//        cout << endl;
//        //printArray(vec2);
//    
//        auto end2 = std::chrono::steady_clock::now();
//        auto diff2 = std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2).count();
//        cout << "Time ms: " << diff2 << endl;
//    
//        cout << "------------------------------------------------------------" << endl;
//    
//        int n3 = 10000;
//        cout << "10000 elements" << endl;
//        vec3 = fillArray(vec3, n3);
//        //printArray(vec2);
//        cout << "Sorted 10000 elements";
//        auto start3 = std::chrono::steady_clock::now();
//        auto stop3 = start3;
//        vec3 = quickSort(vec3, 0, vec3.size() - 1);
//        cout << endl;
//        //printArray(vec2);
//    
//        auto end3 = std::chrono::steady_clock::now();
//        auto diff3 = std::chrono::duration_cast<std::chrono::milliseconds>(end3 - start3).count();
//        cout << "Time ms: " << diff3 << endl;
//    
//        cout << "------------------------------------------------------------" << endl;
//    
//        int n4 = 100000;
//        cout << "100000 elements" << endl;
//        vec4 = fillArray(vec4, n4);
//        //printArray(vec2);
//        cout << "Sorted 100000 elements";
//        auto start4 = std::chrono::steady_clock::now();
//        auto stop4 = start4;
//        vec4 = quickSort(vec4, 0, vec4.size() - 1);
//        cout << endl;
//        //printArray(vec2);
//    
//        auto end4 = std::chrono::steady_clock::now();
//        auto diff4 = std::chrono::duration_cast<std::chrono::milliseconds>(end4 - start4).count();
//        cout << "Time ms: " << diff4 << endl;
//    }

//
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//double iterative_expression(const vector<int>& x) {
//    double result = x[0];  // x1
//    int index = 1;  // Индекс для текущей группы
//
//    for (int group_size = 2; index < x.size(); ++group_size) {
//        double group_sum = 0;
//        for (int j = 0; j < group_size && index < x.size(); ++j, ++index) {
//            group_sum += x[index];
//        }
//        result *= group_sum;  // Умножаем на сумму текущей группы
//    }
//    return result;
//}
//
//int main() {
//    vector<int> x(55);
//    for (int i = 0; i < 55; ++i) {
//        x[i] = i + 1;  // Пример последовательности x1, x2, ... x55
//    }
//
//    double result = iterative_expression(x);
//    cout << "Iterration result: " << result << endl;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//double recursive_expression(const vector<int>& x, int index = 0, int group_size = 1) {
//    if (index >= x.size()) {
//        return 1;
//    }
//
//    double group_sum = 0;
//    for (int i = 0; i < group_size && index + i < x.size(); ++i) {
//        group_sum += x[index + i];
//    }
//
//    return group_sum * recursive_expression(x, index + group_size, group_size + 1);
//}
//
//double iterative_expression(const vector<int>& x) {
//    double result = x[0];  // x1
//    int index = 1;  // Индекс для текущей группы
//
//    for (int group_size = 2; index < x.size(); ++group_size) {
//        double group_sum = 0;
//        for (int j = 0; j < group_size && index < x.size(); ++j, ++index) {
//            group_sum += x[index];
//        }
//        result *= group_sum;  // Умножаем на сумму текущей группы
//    }
//    return result;
//}
//
//int main() {
//    vector<int> x(22);
//    for (int i = 0; i < 22; ++i) {
//        x[i] = i + 1; 
//    }
//
//    double result = recursive_expression(x);
//    cout << "Recursive result: " << result << endl;
//
//    double result2 = iterative_expression(x);
//    cout << "Iterration result: " << result << endl;
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
//};
//
//class DoublyLinkedList {
//public:
//    Node* head;
//
//    DoublyLinkedList() : head(nullptr) {}
//
//    void append(int data) {
//        Node* new_node = new Node(data);
//        if (!head) {
//            head = new_node;
//            return;
//        }
//        Node* last = head;
//        while (last->next) {
//            last = last->next;
//        }
//        last->next = new_node;
//        new_node->prev = last;
//    }
//
//    void display() {
//        Node* current = head;
//        while (current) {
//            cout << current->data << " <-> ";
//            current = current->next;
//        }
//        cout << "NULL" << endl;
//    }
//
//    // Рекурсивная функция удаления списка
//    void delete_recursively(Node* node) {
//        if (!node) return;
//        delete_recursively(node->next);  // Сначала удаляем следующий узел
//        cout << "Delete node with data: " << node->data << endl;
//        delete node;  // Удаляем текущий узел
//    }
//
//    void delete_list() {
//        delete_recursively(head);  // Начинаем с головы
//        head = nullptr;  // Обнуление головы после удаления
//    }
//};
//
//int main() {
//    DoublyLinkedList dll;
//    dll.append(5);
//    dll.append(22);
//    dll.append(5);
//    dll.append(5);
//    dll.append(6);
//    dll.append(3);
//    dll.append(0);
//    cout << "List before deleted:" << endl;
//    dll.display();
//
//    dll.delete_list();
//
//    cout << "List after deleted:" << endl;
//    dll.display();  // Пустой список
//    return 0;
//}
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//class Stack {
//private:
//    int top;
//    int arr[100]; // Ограничиваем размер стека
//public:
//    Stack() { top = -1; }
//
//    void push(int x) {
//        if (top >= 99) {
//            cout << "Stack Overflow" << endl;
//        }
//        else {
//            arr[++top] = x;
//        }
//    }
//
//    int pop() {
//        if (top < 0) {
//            cout << "Stack Underflow" << endl;
//            return 0;
//        }
//        else {
//            return arr[top--];
//        }
//    }
//
//    int peek() {
//        if (top < 0) {
//            cout << "Stack is Empty" << endl;
//            return 0;
//        }
//        else {
//            return arr[top];
//        }
//    }
//
//    bool isEmpty() {
//        return (top < 0);
//    }
//};
//
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int precedence(char c) {
//    if (c == '^')
//        return 3;
//    else if (c == '*' || c == '/')
//        return 2;
//    else if (c == '+' || c == '-')
//        return 1;
//    else
//        return -1;
//}
//
//string infixToPostfix(string s) {
//    Stack stack;
//    string result;
//
//    for (int i = 0; i < s.length(); i++) {
//        char c = s[i];
//
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//            result += c;
//        else if (c == '(')
//            stack.push('(');
//        else if (c == ')') {
//            while (stack.peek() != '(') {
//                result += stack.pop();
//            }
//            stack.pop();
//        }
//        else {
//            while (!stack.isEmpty() && precedence(s[i]) <= precedence(stack.peek())) {
//                result += stack.pop();
//            }
//            stack.push(c);
//        }
//    }
//
//    while (!stack.isEmpty()) {
//        result += stack.pop();
//    }
//
//    return result;
//}
//
//int main() {
//    string expression = "f*g/e-(a*b^d+c)+h*k";
//    cout << "Infix: " << expression << endl;
//    cout << "Postfix: " << infixToPostfix(expression) << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//// Функция для вычисления суммы элементов в пределах группы
//int sumGroup(int arr[], int start, int end) {
//    int sum = 0;
//    for (int i = start; i <= end; i++) {
//        sum += arr[i];
//    }
//    return sum;
//}
//
//// Рекурсивная функция для вычисления выражения
//int computeExpression(int arr[], int n, int start) {
//    // Базовый случай: если достигли конца массива
//    if (start >= n)
//        return 1;
//
//    // Определяем конец текущей группы
//    int end = start + 1;
//
//    // Увеличиваем размер группы при каждом шаге
//    while (end - start < 3 && end < n) {
//        end++;
//    }
//
//    // Суммируем элементы в группе
//    int groupSum = sumGroup(arr, start, end - 1);
//
//    // Рекурсивно умножаем на остальные группы
//    return groupSum * computeExpression(arr, n, end);
//}
//
//int main() {
//    // Пример массива для вычислений
//    int arr[100];
//    for (int i = 1; i <= 55; i++) {
//        arr[i] = i + 1;
//    }
//
//    // Вычисляем выражение
//    int result = computeExpression(arr, 55 , 1); // Начинаем с x1
//    cout << "Result: " << result << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//// Структура узла двунаправленного списка
//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//};
//
//// Функция для создания нового узла
//Node* createNode(int data) {
//    Node* newNode = new Node();
//    newNode->data = data;
//    newNode->next = nullptr;
//    newNode->prev = nullptr;
//    return newNode;
//}
//
//// Функция для создания двунаправленного списка
//Node* createList() {
//    Node* head = createNode(1);
//    Node* second = createNode(2);
//    Node* third = createNode(3);
//
//    head->next = second;
//    second->prev = head;
//    second->next = third;
//    third->prev = second;
//
//    return head;
//}
//
//// Функция для вывода списка
//void printList(Node* head) {
//    if (head == nullptr) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    Node* temp = head;
//    cout << "List: ";
//    while (temp != nullptr) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//    cout << endl;
//}
//
//// Рекурсивная функция для удаления списка
//void deleteList(Node* head) {
//    if (head == nullptr) {
//        cout << "List is already empty" << endl;
//        return;
//    }
//
//    deleteList(head->next); // Рекурсивно удаляем следующий узел
//    delete head; // Удаляем текущий узел
//}
//
//int main() {
//    // Создаём двунаправленный список
//    Node* head = createList();
//
//    // Выводим список до удаления
//    cout << "Before: ";
//    printList(head);
//
//    // Удаляем список
//    deleteList(head);
//
//    // Пытаемся вывести список после удаления
//    cout << "After: ";
//    printList(head); // Должен показать, что список пуст
//    return 0;
//}



















//#include <iostream>
//#include <vector>
//#include <chrono> // Для замера времени
//
//using namespace std;
//using namespace std::chrono;
//
//// Функция пузырьковой сортировки с условием Айверсона
//long long comparisons = 0;  // Счётчик сравнений
//long long swaps = 0;        // Счётчик перемещений
//
//void bubbleSortIverson(vector<int>& arr) {
//    int n = arr.size();
//    bool swapped = true;
//    for (int i = 0; i < n - 1 && swapped; i++) {
//        swapped = false;
//        for (int j = 0; j < n - i - 1; j++) {
//            comparisons++;  // Увеличиваем число сравнений
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                swaps++;    // Увеличиваем число перемещений
//                swapped = true;
//            }
//        }
//    }
//    cout << "Swaps: " << swaps << " ,Comparisons: " << comparisons;
//}
//
//
//// Генерация массива случайных чисел
//vector<int> generateRandomArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 10000; // случайные числа от 0 до 9999
//    }
//    return arr;
//}
//
//// Заполнение массива по возрастанию
//vector<int> generateSortedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = i;  // Упорядоченные данные
//    }
//    return arr;
//}
//
//// Заполнение массива по убыванию
//vector<int> generateReversedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = size - i;  // Обратный порядок
//    }
//    return arr;
//}
//
//// Функция для замера времени выполнения сортировки
//void measureBubbleSortTime(vector<int> arr) {
//    auto start = high_resolution_clock::now();
//    bubbleSortIverson(arr);
//    cout << endl;
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<milliseconds>(stop - start);
//    cout << "ArrSize: " << arr.size() << ", Time: " << duration.count() << " ms" << endl;
//    cout << "-------------------------------" << endl;
//}
//
//int main() {
//    srand(time(0)); // Инициализация генератора случайных чисел
//
//    vector<int> sizes = { 100, 1000, 10000, 100000, 1000000 }; // Размеры массивов для эксперимента
//
//    // Тестирование случайных массивов
//    for (int size : sizes) {
//        vector<int> arr = generateRandomArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    // Тестирование отсортированных массивов
//    for (int size : sizes) {
//        vector<int> arr = generateSortedArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    // Тестирование массивов, отсортированных по убыванию
//    for (int size : sizes) {
//        vector<int> arr = generateReversedArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    return 0;
//}
//
//
//#include <iostream>
//#include <vector>
//#include <chrono> // Для замера времени
//
//using namespace std;
//using namespace std::chrono;
//
//long long comparisons = 0;  // Счётчик сравнений
//long long swaps = 0;        // Счётчик перемещений
//
//void bubbleSortIverson(vector<int>& arr) {
//    int n = arr.size();
//    bool swapped = true;
//    for (int i = 0; i < n - 1 && swapped; i++) {
//        swapped = false;
//        for (int j = 0; j < n - i - 1; j++) {
//            comparisons++;  // Увеличиваем число сравнений
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                swaps++;    // Увеличиваем число перемещений
//                swapped = true;
//            }
//        }
//    }
//    cout << "Swaps: " << swaps << " ,Comparisons: " << comparisons;
//}
//
//// Генерация массива случайных чисел
//vector<int> generateRandomArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 10000; // случайные числа от 0 до 9999
//    }
//    return arr;
//}
//
//// Заполнение массива по возрастанию
//vector<int> generateSortedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = i;  // Упорядоченные данные
//    }
//    return arr;
//}
//
//// Заполнение массива по убыванию
//vector<int> generateReversedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = size - i;  // Обратный порядок
//    }
//    return arr;
//}
//
//// Функция для замера времени выполнения сортировки
//void measureBubbleSortTime(vector<int> arr) {
//    auto start = high_resolution_clock::now();
//    bubbleSortIverson(arr);
//    cout << endl;
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<milliseconds>(stop - start);
//    cout << "ArrSize: " << arr.size() << ", Time: " << duration.count() << " ms" << endl;
//    cout << "-------------------------------" << endl;
//}
//
//int main() {
//    srand(time(0)); // Инициализация генератора случайных чисел
//
//    vector<int> sizes = { 100, 1000, 10000, 100000}; // Размеры массивов для эксперимента
//
//    cout << "\nSorted +:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateSortedArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    cout << "\nSorted -:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateReversedArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <chrono> // Для замера времени
//
//using namespace std;
//using namespace std::chrono;
//
//long long comparisons = 0;  // Счетчик сравнений
//long long swaps = 0;        // Счетчик перемещений
//
//// Функция шейкерной сортировки с подсчетом операций
//void shakerSort(vector<int>& arr) {
//    int left = 0;
//    int right = arr.size() - 1;
//    bool swapped = true;
//
//    while (left < right&& swapped) {
//        swapped = false;
//        // Проход слева направо
//        for (int i = left; i < right; i++) {
//            comparisons++;  // Сравнение
//            if (arr[i] > arr[i + 1]) {
//                swap(arr[i], arr[i + 1]);
//                swaps++;    // Перемещение
//                swapped = true;
//            }
//        }
//        right--;
//
//        // Проход справа налево
//        for (int i = right; i > left; i--) {
//            comparisons++;  // Сравнение
//            if (arr[i - 1] > arr[i]) {
//                swap(arr[i - 1], arr[i]);
//                swaps++;    // Перемещение
//                swapped = true;
//            }
//        }
//        left++;
//    }
//    cout << "Swaps: " << swaps << " ,Comparisons: " << comparisons;
//}
//
//// Генерация массива случайных чисел
//vector<int> generateRandomArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 10000; // случайные числа от 0 до 9999
//    }
//    return arr;
//}
//
//// Заполнение массива по возрастанию
//vector<int> generateSortedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = i;  // Упорядоченные данные
//    }
//    return arr;
//}
//
//// Заполнение массива по убыванию
//vector<int> generateReversedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = size - i;  // Обратный порядок
//    }
//    return arr;
//}
//
//// Функция для замера времени выполнения сортировки
//void measureBubbleSortTime(vector<int> arr) {
//    auto start = high_resolution_clock::now();
//    shakerSort(arr);
//    cout << endl;
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<milliseconds>(stop - start);
//    cout << "ArrSize: " << arr.size() << ", Time: " << duration.count() << " ms" << endl;
//    cout << "-------------------------------" << endl;
//    comparisons = 0;  // Счетчик сравнений
//    swaps = 0;
//}
//
//int main() {
//    srand(time(0)); // Инициализация генератора случайных чисел
//
//    vector<int> sizes = { 100, 1000, 10000, 100000}; // Размеры массивов для эксперимента
//
//    cout << "Random:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateRandomArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    cout << "\nSort +:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateSortedArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    cout << "\nSort -" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateReversedArray(size);
//        measureBubbleSortTime(arr);
//    }
//
//    return 0;
//}




//#include <iostream>
//#include <vector>
//#include <chrono> // Для замера времени
//#include <algorithm> // Для функции merge
//
//using namespace std;
//using namespace std::chrono;
//
//const int RUN = 32; // Минимальный размер подмассива для сортировки вставками
//
//// Глобальные переменные для подсчета операций
//long long comparisons = 0;  // Счетчик сравнений
//long long swaps = 0;        // Счетчик перемещений
//
//// Функция сортировки вставками для подмассивов
//void insertionSort(vector<int>& arr, int left, int right) {
//    for (int i = left + 1; i <= right; i++) {
//        int temp = arr[i];
//        int j = i - 1;
//        while (j >= left && arr[j] > temp) {
//            comparisons++;  // Сравнение
//            arr[j + 1] = arr[j];
//            swaps++;        // Перемещение
//            j--;
//        }
//        comparisons++;  // Сравнение при выходе из while
//        arr[j + 1] = temp;
//        swaps++;        // Перемещение
//    }
//}
//
//// Слияние двух отсортированных подмассивов
//void merge(vector<int>& arr, int l, int m, int r) {
//    int n1 = m - l + 1;
//    int n2 = r - m;
//    vector<int> left(n1), right(n2);
//
//    for (int i = 0; i < n1; i++) {
//        left[i] = arr[l + i];
//    }
//    for (int i = 0; i < n2; i++) {
//        right[i] = arr[m + 1 + i];
//    }
//
//    int i = 0, j = 0, k = l;
//    while (i < n1 && j < n2) {
//        comparisons++;  // Сравнение в слиянии
//        if (left[i] <= right[j]) {
//            arr[k++] = left[i++];
//        }
//        else {
//            arr[k++] = right[j++];
//        }
//        swaps++;  // Перемещение
//    }
//
//    while (i < n1) {
//        arr[k++] = left[i++];
//        swaps++;  // Перемещение
//    }
//
//    while (j < n2) {
//        arr[k++] = right[j++];
//        swaps++;  // Перемещение
//    }
//}
//
//// Реализация TimSort
//void timSort(vector<int>& arr) {
//    int n = arr.size();
//
//    // Сортировка подмассивов методом вставки
//    for (int i = 0; i < n; i += RUN) {
//        insertionSort(arr, i, min(i + RUN - 1, n - 1));
//    }
//
//    // Слияние отсортированных подмассивов
//    for (int size = RUN; size < n; size = 2 * size) {
//        for (int left = 0; left < n; left += 2 * size) {
//            int mid = min(left + size - 1, n - 1);
//            int right = min(left + 2 * size - 1, n - 1);
//
//            if (mid < right) {
//                merge(arr, left, mid, right);
//            }
//        }
//    }
//}
//
//// Генерация массива случайных чисел
//vector<int> generateRandomArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 10000; // случайные числа от 0 до 9999
//    }
//    return arr;
//}
//
//// Заполнение массива по возрастанию
//vector<int> generateSortedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = i;  // Упорядоченные данные
//    }
//    return arr;
//}
//
//// Заполнение массива по убыванию
//vector<int> generateReversedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = size - i;  // Обратный порядок
//    }
//    return arr;
//}
//
//// Функция для замера времени выполнения TimSort и подсчета операций
//double measureTimSortTime(vector<int>& arr) {
//    comparisons = 0;  // Обнуляем счетчики перед каждым запуском
//    swaps = 0;
//
//    auto start = high_resolution_clock::now();
//    timSort(arr);
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<milliseconds>(stop - start).count();
//
//    // Выводим количество операций
//    cout << "Число сравнений: " << comparisons << ", Число перемещений: " << swaps << endl;
//
//    return duration; // возвращает время в миллисекундах
//}
//
//int main() {
//    srand(time(0)); // Инициализация генератора случайных чисел
//
//    vector<int> sizes = { 100, 1000, 10000, 100000, 1000000 }; // Размеры массивов для эксперимента
//
//    cout << "Результаты для случайных массивов:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateRandomArray(size);
//        double time_taken = measureTimSortTime(arr);
//        cout << "Размер массива: " << size << ", Время TimSort: " << time_taken << " мс" << endl;
//    }
//
//    cout << "\nРезультаты для отсортированных массивов (по возрастанию):" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateSortedArray(size);
//        double time_taken = measureTimSortTime(arr);
//        cout << "Размер массива: " << size << ", Время TimSort: " << time_taken << " мс" << endl;
//    }
//
//    cout << "\nРезультаты для массивов, отсортированных по убыванию:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateReversedArray(size);
//        double time_taken = measureTimSortTime(arr);
//        cout << "Размер массива: " << size << ", Время TimSort: " << time_taken << " мс" << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <chrono>
//#include <string>
//#include <vector>
//#include <algorithm> // для std::min
//
//struct Enterprise {
//    int licenseNumber;  // Номер лицензии (ключ)
//    std::string name;   // Название предприятия
//    std::string founder;  // Учредитель
//};
//
//// Алгоритм поиска по методу Фибоначчи
//int fibonacciSearch(Enterprise enterprises[], int size, int key) {
//    int fib2 = 0;  // (m-2)-е число Фибоначчи
//    int fib1 = 1;  // (m-1)-е число Фибоначчи
//    int fibM = fib1 + fib2;  // m-е число Фибоначчи
//
//    // Находим минимальное число Фибоначчи, большее или равное size
//    while (fibM < size) {
//        fib2 = fib1;
//        fib1 = fibM;
//        fibM = fib1 + fib2;
//    }
//
//    int offset = -1;
//
//    // Пока есть элементы для сравнения
//    while (fibM > 1) {
//        // Проверяем, находится ли индекс valid
//        int i = std::min(offset + fib2, size - 1);
//
//        // Если ключ больше, чем значение в массиве, сужаем диапазон
//        if (enterprises[i].licenseNumber < key) {
//            fibM = fib1;
//            fib1 = fib2;
//            fib2 = fibM - fib1;
//            offset = i;
//        }
//        // Если ключ меньше, сужаем диапазон слева
//        else if (enterprises[i].licenseNumber > key) {
//            fibM = fib2;
//            fib1 = fib1 - fib2;
//            fib2 = fibM - fib1;
//        }
//        // Если ключ найден
//        else {
//            return i;
//        }
//    }
//
//    // Проверяем последний элемент
//    if (fib1 && enterprises[offset + 1].licenseNumber == key) {
//        return offset + 1;
//    }
//
//    return -1;  // Ключ не найден
//}
//
//// Функция для генерации случайной таблицы
//std::vector<Enterprise> generateTable(int size) {
//    std::vector<Enterprise> enterprises(size);
//    for (int i = 0; i < size; i++) {
//        enterprises[i].licenseNumber = 100000 + rand() % 900000; // случайный шестизначный номер лицензии
//        enterprises[i].name = "Enterprise_" + std::to_string(i);
//        enterprises[i].founder = "Founder_" + std::to_string(i);
//    }
//    std::sort(enterprises.begin(), enterprises.end(), [](Enterprise a, Enterprise b) {
//        return a.licenseNumber < b.licenseNumber;
//        }); // Сортируем по номеру лицензии
//    return enterprises;
//}
//
//int main() {
//    srand(time(0));
//
//    // Массивы размеров таблиц
//    std::vector<int> sizes = { 100, 1000, 10000, 100000 };
//
//    // Перебор различных размеров таблиц
//    for (int size : sizes) {
//        // Генерация таблицы
//        std::vector<Enterprise> table = generateTable(size);
//        Enterprise* enterprises = table.data();  // указатель на массив
//
//        // Искомый ключ (для демонстрации поиска будем использовать ключ, существующий в таблице)
//        int searchKey = enterprises[size / 2].licenseNumber;
//
//        // Измерение времени выполнения алгоритма
//        auto start = std::chrono::high_resolution_clock::now();
//        int result = fibonacciSearch(enterprises, size, searchKey);
//        auto end = std::chrono::high_resolution_clock::now();
//
//        // Вывод результатов
//        std::chrono::duration<double, std::milli> duration = end - start;
//        std::cout << "Table Size: " << size << ", Time: "
//            << duration.count() << " ms, Search Result: " << result << std::endl;
//    }
//
//    return 0;
//}
//
//#include <iostream>
//#include <chrono>
//#include <string>
//#include <vector>
//#include <algorithm> // для std::min
//
//struct Enterprise {
//    int licenseNumber;  // Номер лицензии (ключ)
//    std::string name;   // Название предприятия
//    std::string founder;  // Учредитель
//};
//
//// Алгоритм поиска по методу Фибоначчи
//int fibonacciSearch(Enterprise enterprises[], int size, int key) {
//    int fib2 = 0;  // (m-2)-е число Фибоначчи
//    int fib1 = 1;  // (m-1)-е число Фибоначчи
//    int fibM = fib1 + fib2;  // m-е число Фибоначчи
//
//    // Находим минимальное число Фибоначчи, большее или равное size
//    while (fibM < size) {
//        fib2 = fib1;
//        fib1 = fibM;
//        fibM = fib1 + fib2;
//    }
//
//    int offset = -1;
//
//    // Пока есть элементы для сравнения
//    while (fibM > 1) {
//        int i = std::min(offset + fib2, size - 1);
//
//        if (enterprises[i].licenseNumber < key) {
//            fibM = fib1;
//            fib1 = fib2;
//            fib2 = fibM - fib1;
//            offset = i;
//        }
//        else if (enterprises[i].licenseNumber > key) {
//            fibM = fib2;
//            fib1 = fib1 - fib2;
//            fib2 = fibM - fib1;
//        }
//        else {
//            return i;
//        }
//    }
//
//    if (fib1 && enterprises[offset + 1].licenseNumber == key) {
//        return offset + 1;
//    }
//
//    return -1;  // Ключ не найден
//}
//
//// Функция для генерации случайной таблицы
//std::vector<Enterprise> generateTable(int size) {
//    std::vector<Enterprise> enterprises(size);
//    for (int i = 0; i < size; i++) {
//        enterprises[i].licenseNumber = 100000 + rand() % 900000; // случайный шестизначный номер лицензии
//        enterprises[i].name = "Enterprise_" + std::to_string(i);
//        enterprises[i].founder = "Founder_" + std::to_string(i);
//    }
//    std::sort(enterprises.begin(), enterprises.end(), [](Enterprise a, Enterprise b) {
//        return a.licenseNumber < b.licenseNumber;
//        }); // Сортируем по номеру лицензии
//    return enterprises;
//}
//
//// Основная функция для тестирования и измерения времени
//int main() {
//    srand(time(0));
//
//    // Массивы размеров таблиц
//    std::vector<int> sizes = { 100, 1000, 10000};
//
//    // Перебор различных размеров таблиц
//    for (int size : sizes) {
//        // Генерация таблицы
//        std::vector<Enterprise> table = generateTable(size);
//        Enterprise* enterprises = table.data();  // указатель на массив
//
//        // Искомый ключ (для демонстрации поиска будем использовать ключ, существующий в таблице)
//        int searchKey = enterprises[size / 2].licenseNumber;
//
//        // Измерение времени выполнения алгоритма
//        auto start = std::chrono::high_resolution_clock::now();
//        int result = fibonacciSearch(enterprises, size, searchKey);
//        auto end = std::chrono::high_resolution_clock::now();
//
//        // Вывод результатов
//        std::chrono::duration<double, std::milli> duration = end - start;
//                std::cout << "Table Size: " << size << ", Time: "
//        << duration.count() << " ms, Search Result: " << result << std::endl;
//    }
//
//    return 0;
//}
#include <iostream>
#include <string>
#include <vector>
#include <chrono> // для подсчета времени

// Функция для поиска максимального палиндрома
//std::string longestPalindrome(const std::string& s) {
//    int n = s.length();
//    if (n == 0) return "";
//
//    std::vector<std::vector<bool>> dp(n, std::vector<bool>(n, false));
//    int start = 0, maxLength = 1;
//
//    // Каждый символ сам по себе является палиндромом
//    for (int i = 0; i < n; ++i) {
//        dp[i][i] = true;
//    }
//
//    // Проверка пар символов
//    for (int i = 0; i < n - 1; ++i) {
//        if (s[i] == s[i + 1]) {
//            dp[i][i + 1] = true;
//            start = i;
//            maxLength = 2;
//        }
//    }
//
//    // Проверка всех строк длиной больше 2 символов
//    for (int length = 3; length <= n; ++length) {
//        for (int i = 0; i < n - length + 1; ++i) {
//            int j = i + length - 1;
//            if (s[i] == s[j] && dp[i + 1][j - 1]) {
//                dp[i][j] = true;
//                start = i;
//                maxLength = length;
//            }
//        }
//    }
//
//    return s.substr(start, maxLength);
//}
//
//// Функция для извлечения имени файла из пути
//std::string extractFileName(const std::string& path) {
//    size_t pos = path.find_last_of("/\\");
//    if (pos != std::string::npos) {
//        return path.substr(pos + 1);
//    }
//    return path;
//}
//
//int main() {
//    // Тест для поиска максимального палиндрома
//    std::string s1 = "abacdfgdcaba";
//    auto start_palindrome = std::chrono::high_resolution_clock::now();
//    std::string result_palindrome = longestPalindrome(s1);
//    auto end_palindrome = std::chrono::high_resolution_clock::now();
//    std::chrono::duration<double> elapsed_palindrome = end_palindrome - start_palindrome;
//    std::cout << "Longest Palindrome: " << result_palindrome << std::endl;
//    std::cout << "Time taken for palindrome search: " << elapsed_palindrome.count() << " seconds" << std::endl;
//
//    // Тест для извлечения имени файла из пути
//    std::string path = "/home/user/docs/file.txt";
//    auto start_file = std::chrono::high_resolution_clock::now();
//    std::string result_file = extractFileName(path);
//    auto end_file = std::chrono::high_resolution_clock::now();
//    std::chrono::duration<double> elapsed_file = end_file - start_file;
//    std::cout << "File Name: " << result_file << std::endl;
//    std::cout << "Time taken for file name extraction: " << elapsed_file.count() << " seconds" << std::endl;
//
//    return 0;
//}

//
//#include <iostream>
//#include <regex>
//#include <string>
//#include <chrono> // для замера времени
//
//// Функция для извлечения имени файла с помощью регулярного выражения
//std::string extractFileNameWithRegex(const std::string& path) {
//    std::regex file_regex("[^\\/]+$");
//    std::smatch match;
//    if (std::regex_search(path, match, file_regex)) {
//        return match.str(0);
//    }
//    return "File name not found";
//}
//
//// Функция для замера времени выполнения
//double testFileNameExtraction(const std::string& path) {
//    auto start = std::chrono::high_resolution_clock::now();
//    std::string result = extractFileNameWithRegex(path);
//    auto end = std::chrono::high_resolution_clock::now();
//    std::chrono::duration<double> elapsed = end - start;
//
//    std::cout << "Path: " << path << std::endl;
//    std::cout << "Extracted file name: " << result << std::endl;
//    std::cout << "Time taken: " << elapsed.count() << " seconds\n" << std::endl;
//
//    return elapsed.count();
//}
//
//int main() {
//    // Пути разной длины для тестирования
//    std::string path100 = std::string(90, 'a') + "/filename.txt";  // 100 символов
//    std::string path1000 = std::string(990, 'a') + "/filename.txt"; // 1000 символов
//    std::string path10000 = std::string(9990, 'a') + "/filename.txt"; // 10000 символов
//    //std::string path100000 = std::string(99990, 'a') + "/filename.txt"; // 100000 символов
//    //std::string path1000000 = std::string(999990, 'a') + "/filename.txt"; // 1000000 символов
//
//    // Замер времени для каждого пути
//    double time100 = testFileNameExtraction(path100);
//    double time1000 = testFileNameExtraction(path1000);
//    double time10000 = testFileNameExtraction(path10000);
//    //double time100000 = testFileNameExtraction(path100000);
//    //double time1000000 = testFileNameExtraction(path1000000);
//
//    // Результаты можно вывести в виде таблицы
//    std::cout << "Summary Table:\n";
//    std::cout << "Path Length\tTime Taken (seconds)\n";
//    std::cout << "100\t\t" << time100 << std::endl;
//    std::cout << "1000\t\t" << time1000 << std::endl;
//    std::cout << "10000\t\t" << time10000 << std::endl;
//    //std::cout << "100000\t\t" << time100000 << std::endl;
//    //std::cout << "1000000\t\t" << time1000000 << std::endl;
//
//    return 0;
//}


//#include <iostream>
//#include <regex>
//#include <string>
//
//// Функция для извлечения имени файла с помощью регулярного выражения
//std::string extractFileNameWithRegex(const std::string& path) {
//    std::regex file_regex("[^\\/]+$");
//    std::smatch match;
//    if (std::regex_search(path, match, file_regex)) {
//        return match.str(0);
//    }
//    return "File name not found";
//}
//
//int main() {
//    // Тесты
//    std::string path1 = "/home/user/docs/file.txt";
//    std::string path2 = "C:\\Windows\\System32\\drivers\\etc";
//    std::string path3 = "/var/log/syslog";
//    std::string path4 = "filename.txt";
//    std::string path5 = "/home/user/docs/";
//
//    // Выполняем поиск имени файла
//    std::cout << "File Name 1: " << extractFileNameWithRegex(path1) << std::endl;
//    std::cout << "File Name 2: " << extractFileNameWithRegex(path2) << std::endl;
//    std::cout << "File Name 3: " << extractFileNameWithRegex(path3) << std::endl;
//    std::cout << "File Name 4: " << extractFileNameWithRegex(path4) << std::endl;
//    std::cout << "File Name 5: " << extractFileNameWithRegex(path5) << std::endl;
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//// Префикс-функция для алгоритма Кнута-Морриса-Пратта
//std::vector<int> computeKMPPrefix(const std::string& pattern) {
//    int m = pattern.size();
//    std::vector<int> prefix(m);
//    int k = 0;
//
//    for (int i = 1; i < m; ++i) {
//        while (k > 0 && pattern[k] != pattern[i]) {
//            k = prefix[k - 1];
//        }
//        if (pattern[k] == pattern[i]) {
//            k++;
//        }
//        prefix[i] = k;
//    }
//
//    return prefix;
//}
//
//// Функция для поиска максимального палиндрома с использованием КМП
//std::string longestPalindromeKMP(const std::string& s) {
//    if (s.empty()) return "";
//
//    int n = s.size();
//    std::string longestPalindrome = s.substr(0, 1);  // Инициализируем самым маленьким палиндромом
//
//    for (int center = 0; center < n; ++center) {
//        // Проверяем палиндромы с четной длиной
//        int left = center, right = center + 1;
//        while (left >= 0 && right < n && s[left] == s[right]) {
//            if (right - left + 1 > longestPalindrome.size()) {
//                longestPalindrome = s.substr(left, right - left + 1);
//            }
//            left--;
//            right++;
//        }
//
//        // Проверяем палиндромы с нечетной длиной
//        left = center; right = center;
//        while (left >= 0 && right < n && s[left] == s[right]) {
//            if (right - left + 1 > longestPalindrome.size()) {
//                longestPalindrome = s.substr(left, right - left + 1);
//            }
//            left--;
//            right++;
//        }
//    }
//
//    return longestPalindrome;
//}
//
//int main() {
//    // Тесты
//    std::string s1 = "abacdfgdcaba";
//    std::string s2 = "racecar";
//    std::string s3 = "banana";
//    std::string s4 = "aabbccbbaa";
//    std::string s5 = "";
//
//    std::cout << "Longest Palindrome in '" << s1 << "' is: " << longestPalindromeKMP(s1) << std::endl;
//    std::cout << "Longest Palindrome in '" << s2 << "' is: " << longestPalindromeKMP(s2) << std::endl;
//    std::cout << "Longest Palindrome in '" << s3 << "' is: " << longestPalindromeKMP(s3) << std::endl;
//    std::cout << "Longest Palindrome in '" << s4 << "' is: " << longestPalindromeKMP(s4) << std::endl;
//    std::cout << "Longest Palindrome in '" << s4 << "' is: " << longestPalindromeKMP(s5) << std::endl;
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <chrono> // Для замера времени
//#include <algorithm> // Для функции merge
//
//using namespace std;
//using namespace std::chrono;
//
//const int RUN = 32; // Минимальный размер подмассива для сортировки вставками
//
//// Глобальные переменные для подсчета операций
//long long comparisons = 0;  // Счетчик сравнений
//long long swaps = 0;        // Счетчик перемещений
//
//// Функция сортировки вставками для подмассивов
//void insertionSort(vector<int>& arr, int left, int right) {
//    for (int i = left + 1; i <= right; i++) {
//        int temp = arr[i];
//        int j = i - 1;
//        while (j >= left && arr[j] > temp) {
//            comparisons++;  // Сравнение
//            arr[j + 1] = arr[j];
//            swaps++;        // Перемещение
//            j--;
//        }
//        comparisons++;  // Сравнение при выходе из while
//        arr[j + 1] = temp;
//        swaps++;        // Перемещение
//    }
//}
//
//// Слияние двух отсортированных подмассивов
//void merge(vector<int>& arr, int l, int m, int r) {
//    int n1 = m - l + 1;
//    int n2 = r - m;
//    vector<int> left(n1), right(n2);
//
//    for (int i = 0; i < n1; i++) {
//        left[i] = arr[l + i];
//    }
//    for (int i = 0; i < n2; i++) {
//        right[i] = arr[m + 1 + i];
//    }
//
//    int i = 0, j = 0, k = l;
//    while (i < n1 && j < n2) {
//        comparisons++;  // Сравнение в слиянии
//        if (left[i] <= right[j]) {
//            arr[k++] = left[i++];
//        }
//        else {
//            arr[k++] = right[j++];
//        }
//        swaps++;  // Перемещение
//    }
//
//    while (i < n1) {
//        arr[k++] = left[i++];
//        swaps++;  // Перемещение
//    }
//
//    while (j < n2) {
//        arr[k++] = right[j++];
//        swaps++;  // Перемещение
//    }
//}
//
//// Реализация TimSort
//void timSort(vector<int>& arr) {
//    int n = arr.size();
//
//    // Сортировка подмассивов методом вставки
//    for (int i = 0; i < n; i += RUN) {
//        insertionSort(arr, i, min(i + RUN - 1, n - 1));
//    }
//
//    // Слияние отсортированных подмассивов
//    for (int size = RUN; size < n; size = 2 * size) {
//        for (int left = 0; left < n; left += 2 * size) {
//            int mid = min(left + size - 1, n - 1);
//            int right = min(left + 2 * size - 1, n - 1);
//
//            if (mid < right) {
//                merge(arr, left, mid, right);
//            }
//        }
//    }
//}
//
//// Генерация массива случайных чисел
//vector<int> generateRandomArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 10000; // случайные числа от 0 до 9999
//    }
//    return arr;
//}
//
//// Заполнение массива по возрастанию
//vector<int> generateSortedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = i;  // Упорядоченные данные
//    }
//    return arr;
//}
//
//// Заполнение массива по убыванию
//vector<int> generateReversedArray(int size) {
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = size - i;  // Обратный порядок
//    }
//    return arr;
//}
//
//// Функция для замера времени выполнения TimSort и подсчета операций
//double measureTimSortTime(vector<int>& arr) {
//    comparisons = 0;  // Обнуляем счетчики перед каждым запуском
//    swaps = 0;
//
//    auto start = high_resolution_clock::now();
//    timSort(arr);
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<milliseconds>(stop - start).count();
//
//    // Выводим количество операций
//    cout << "Число сравнений: " << comparisons << ", Число перемещений: " << swaps << endl;
//
//    return duration; // возвращает время в миллисекундах
//}
//
//int main() {
//    srand(time(0)); // Инициализация генератора случайных чисел
//
//    vector<int> sizes = { 100, 1000, 10000, 100000, 1000000 }; // Размеры массивов для эксперимента
//
//    cout << "Результаты для случайных массивов:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateRandomArray(size);
//        double time_taken = measureTimSortTime(arr);
//        cout << "Размер массива: " << size << ", Время TimSort: " << time_taken << " мс" << endl;
//    }
//
//    cout << "\nРезультаты для отсортированных массивов (по возрастанию):" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateSortedArray(size);
//        double time_taken = measureTimSortTime(arr);
//        cout << "Размер массива: " << size << ", Время TimSort: " << time_taken << " мс" << endl;
//    }
//
//    cout << "\nРезультаты для массивов, отсортированных по убыванию:" << endl;
//    for (int size : sizes) {
//        vector<int> arr = generateReversedArray(size);
//        double time_taken = measureTimSortTime(arr);
//        cout << "Размер массива: " << size << ", Время TimSort: " << time_taken << " мс" << endl;
//    }
//
//    return 0;
//}


//struct Node {
//	int data;
//	Node* next;
//
//	Node(int value) : data(value), next(nullptr) {}
//};
//
//
//void appendElement(Node*& head, int data) {
//    Node* new_elem = new Node(data);
//    if (head == nullptr) {
//        head = new_elem;
//    }
//    else {
//        Node* cur_elem = head;
//        while (cur_elem->next != nullptr) {
//            cur_elem = cur_elem->next;
//        }
//        cur_elem->next = new_elem;
//    }
//}
//
//void PrintList(Node* head) {
//    Node* curr = head;
//    while (curr->next != nullptr) {
//        cout << curr->data << " ";
//        curr = curr->next;
//    }
//    cout  << curr->data;
//    return;
//}
//
//
//void DeleteFirstLZ(Node* head) {
//    Node* curr = head;
//    Node* prev = nullptr;
//    if (curr == nullptr) {
//        return;
//    }
//    if (head->data < 0) {
//        head = curr->next;
//        delete head;
//        return;
//    }
//    else {
//        while (curr->next != nullptr) {
//            if (curr->data < 0) {
//                prev->next = curr->next;
//                delete curr;
//                return;
//            }
//            else {
//                prev = curr;
//                curr = curr->next;
//            }
//        }
//    }
//}
//
//int main() {
//	Node* head = nullptr;
//
//	// Добавляем элементы в список: 1 -> 2 -> -5 -> 3 -> 2
//    appendElement(head, 1);
//    appendElement(head, 2);
//    appendElement(head, -5);
//    appendElement(head, 3);
//    appendElement(head, 2);
//
//    PrintList(head);
//
//    DeleteFirstLZ(head);
//
//    cout << endl;
//
//    PrintList(head);
//}

//#include <iostream>
//using namespace std;
//
//int divide(int a, int b) {
//    if (a < b) return 0;
//    return 1 + divide(a - b, b);
//}
//
//int main() {
//    int result = divide(5, 2);
//    cout << "Result: " << result << endl;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//void insertionSort(std::vector<int>& arr) {
//    int n = arr.size();
//    for (int i = 1; i < n; i++) {
//        int key = arr[i];  // текущий элемент
//        int j = i - 1;
//
//        // Сдвигаем элементы arr[0..i-1], которые больше ключа, вправо
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;  // Вставляем ключ в правильную позицию
//    }
//}
//
//int main() {
//    std::vector<int> arr = { 12, 11, 13, 5, 6 };
//
//    std::cout << "Массив до сортировки: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//
//    insertionSort(arr);
//
//    std::cout << "\nМассив после сортировки: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//
//    return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int minFoodPath(const vector<vector<int>>& grid) {
//    int N = grid.size();
//    int M = grid[0].size();
//
//    // Матрица dp для хранения минимальных значений пути
//    vector<vector<int>> dp(N, vector<int>(M, 0));
//
//    // Инициализация первой клетки
//    dp[0][0] = grid[0][0];
//
//    // Заполнение первой строки
//    for (int j = 1; j < M; ++j) {
//        dp[0][j] = dp[0][j - 1] + grid[0][j];
//    }
//
//    // Заполнение первого столбца
//    for (int i = 1; i < N; ++i) {
//        dp[i][0] = dp[i - 1][0] + grid[i][0];
//    }
//
//    // Заполнение оставшихся клеток
//    for (int i = 1; i < N; ++i) {
//        for (int j = 1; j < M; ++j) {
//            dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
//        }
//    }
//
//    // Минимальная еда для достижения правого нижнего угла
//    return dp[N - 1][M - 1];
//}

//string minFoodPath(const vector<vector<int>>& grid) {
//    int N = grid.size();
//    int M = grid[0].size();
//
//    vector<vector<int>> dp(N, vector<int>(M, 0));
//
//    dp[0][0] = grid[0][0];
//
//    for (int i = 1; i < N; i++) {
//        dp[i][0] = dp[i - 1][0] + grid[i][0];
//    }
//
//    for (int j = 1; j < M; j++) {
//        dp[0][j] = dp[0][j - 1] + grid[0][j];
//    }
//
//    for (int i = 1; i < N; i++) {
//        for (int j = 1; j < M; j++) {
//            dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
//        }
//    }
//    int i = 4, j = 4;
//    string f = "";
//    //int start = dp[i][j];
//    while (i != 0 and j != 0) {
//        if (i == 0 and j != 0) {
//            f += "R";
//            j--;
//        }
//        else if (j == 0 and i != 0) {
//            f += "D";
//            i--;
//        }
//        else if (dp[i - 1][j] > dp[i][j - 1] and i > 0) {
//            f += "D";
//            i--;
//        }
//        else if (dp[i - 1][j] < dp[i][j - 1] and j > 0) {
//            f += "R";
//            j--;
//        }
//    }
//
//    return f;
//}
//
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//    vector<vector<int>> grid(N, vector<int>(M));
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < M; ++j) {
//            cin >> grid[i][j];
//        }
//    }
//
//    cout << minFoodPath(grid) << endl;
//    return 0;
//}



//int main() {
//    vector<pair<int, int>> vec = { {4,5},{2,2},{3,4},{2,3},{1,3},{2,4}, {2,5} };
//    sort(vec.begin(), vec.end());
//    vector<int>left = {};
//    vector<int>right = {};
//    vector<int> final = {1};
//    //for (auto a : vec) {
//    //    cout << a.first << " " << a.second << endl;
//    //}
//    // 
//    // 
//    //for (auto a : vec) {
//    //    int counter = 0;
//    //    for (int i = 0; i < vec[vec.size() - 1].second; i++) {
//    //        if (a.first)
//    //    }
//    //}
//    for (auto a : vec) {
//        left.push_back(a.first);
//        right.push_back(a.second);
//    }
//    for (auto a1 : left) {
//        if (count(left.begin(), left.end(), a1) >= 2 and count(final.begin(), final.end(), a1) == 0) {
//            final.push_back(a1);
//        }
//    }
//    for (auto a2 : right) {
//        if (count(right.begin(), right.end(), a2) >= 2 and count(final.begin(),final.end(), a2) == 0) {
//            final.push_back(a2);
//        }
//    }
//    for (auto a : final) {
//        cout << a << " ";
//    }
//}


//int main() {
//    int a, b;
//    vector<int> v1 = {};
//    int counter = 0;
//    vector<int> v2 = {};
//    cin >> a >> b;
//    for (int i = 0; i < b; i++) {
//        int x, y;
//        cin >> x >> y;
//        v1.push_back(x);
//        v2.push_back(x);
//    }
//    for (auto a : v1) {
//        if (count(v1.begin(), v1.end(), a) != 1) {
//            counter += 1;
//        }
//    }
//
//    for (auto a : v2) {
//        if (count(v2.begin(), v2.end(), a) != 1) {
//            counter += 1;
//        }
//    }
//
//    if (counter == 0) {
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<pair<int, vector<int>>> vec;
//    vector<int> nums = {};
//    // Ввод данных
//    for (int i = 1; i <= n; i++) {
//        int a, b;
//        cin >> a >> b;
//        vector<int> vec_n = { a, b };
//        vec.push_back({ i, vec_n });
//    }
//
//    // Сортировка по разнице a - b в порядке убывания
//    sort(vec.begin(), vec.end(), [](const pair<int, vector<int>>& p1, const pair<int, vector<int>>& p2) {
//        return (p1.second[0] - p1.second[1]) > (p2.second[0] - p2.second[1]);
//        });
//
//
//    // Суммируем элементы и находим максимальную сумму ТУТ проблема
//    int sum = 0;
//    for (const auto& a : vec) {
//        int current_sum = a.second[0] + a.second[1];
//        if (sum < current_sum) {
//            sum = current_sum; // Обновляем сумму, если это лучшее значение
//        }
//        nums.push_back(a.first);
//    }
//
//    cout << sum << endl;
//    for (int num : nums) {
//        std::cout << num << " ";
//    }
//    return 0;
//}


#include <iostream>
using std::cout;
using std::endl;

//void Clear() {
//    cout << "\x1B[2J\x1B[H";
//}
//
//int main() {
//    vector<int> a = { 1,2,3,4,5 };
//std:remove(a.begin() + 2, a.end(), a[2]);
//    //a.resize(a.size() - 1);
//    std::sort(a.begin(), a.end(), greater<int>{});
//    for (auto a1 : a) {
//        cout << a1 << " ";
//    }
//}
//
//struct Node {
//    int value;
//    Node* left = nullptr;
//    Node* right = nullptr;
//
//    Node() : value(0) {}
//    Node(int val) : value(val) {}
//};
//
//Node* getNode(Node* head, int val) {
//    if (head == nullptr) {
//        return nullptr;
//    }
//    if (head->value > val && head->left != nullptr){
//        return getNode(head->left, val);
//    }
//    else if (head->value < val && head->right != nullptr) {
//        return getNode(head->right, val);
//    }
//    else if (head->value == val){
//        return head;
//    }
//    else {
//        return nullptr;
//    }
//};

//vector<pair<int, int>> pairs(int a) {
//    vector<pair<int, int>> temp;
//    int i = 0;
//    while (i <= a / 2) {
//        temp.push_back(make_pair(i, a - i));
//        i++;
//    }
//    return temp;
//}

#include <vector>
#include <unordered_map>
using namespace std;

//pair<int,int> twoSum(const vector<int>& nums, int target) {
//    unordered_map<int, int> num_map;
//    for (int i = 0; i < nums.size(); i++) {
//        int difference = target - nums[i];
//
//        if (num_map.find(difference) != num_map.end()) {
//            return { num_map[difference], i };
//
//        }
//        num_map[nums[i]] = i;
//    }
//    return {};
//}
//
//int main() {
//    vector<int> nums = { 2, 7, 11, 15 };
//    int target = 9;
//    pair<int, int> result = twoSum(nums, target);
//    cout << "Indexes: " << result.first << ", " << result.second << endl;
//    return 0;
//}

//int fo(string a) {
//    int k = 0;
//    for (int i = 0; i < a.length(); i++) {
//        if (a[i] == '(') {
//            k++;
//        }
//        else {
//            k--;
//        }
//    }
//    return k;
//}
//
//int main() {
//    string a = "()()(()()()(()()((()((()))((()((((()()((((()))()((((())(((((((()(((((((((()(((())(()()(()((()()(()(())(()((((()((()()()((((())((((((()(()(((()())(()((((()))())(())(()(()()))))))))((((((((((((()())()())())(())))(((()()()((((()(((()(()(()()(()(()()(()(((((((())(())(())())))((()())()((((()()((()))(((()()()())))(())))((((())(((()())(())(()))(()((((()())))())((()(())(((()((((()((()(())())))((()))()()(()(()))))((((((((()())((((()()((((()(()())(((((()(()())()))())(((()))()(()(()(()((((()(())(()))(((((()()(()()()(()(((())())(((()()(()()))(((()()(((())())(()(())())()()(())()()()((()(((()(())((()()((())()))((()()))((()()())((((()(()()(()(((()))()(()))))((()(((()()()))(()(((())()(()((()())(()(()()(()())(())()(((()(()())()((((()((()))))())()))((()()()()(())()())()()()((((()))))(()(((()()(((((((())()))()((((()((())()(()())(())()))(()(()())(((((((())))(((()))())))))()))())((())(()()((())()())()))))()((()()())(())((())((((()())())()()()(((()))())))()()))())(()()()(()((((((()()))())()))()(((()(((())((((()()()(()))())()()))))())()))())((())()())(((((())())((())())))(((())(((())(((((()(((((())(()(()())())(()(())(()))(()((((()))())()))))())))((()(()))))())))(((((())()))())()))))()))))(((()))()))))((()))((()((()(()(())()())))(()()()(())()))()((((())))))))(())(()((()()))(()))(()))(()((()))))))()()((((()()))()())()))))))()()()))(()((())(()))((()()()())()(((()((((())())))()((((()(()))))))())))()()())()))(()))))(()())()))))))((())))))))())()))()((())())))(()((()))()))(())))))(()))()())()()))((()(()))()()()()))))())()()))())(())()()))()))((()))))()()(()())))))()()()))((((()))()))))(()(())))(()())))((())())(()))()))))()())))()())()())))))))))()()))))())))((())((()))))())))(((()())))))))(()))()()))(()))()))))()())))))())((((()())))))))())))()()))))))))()))()))))()))))))(())))))))))())))))))))))))))())())((())))))))))()))((())))()))))))))())()(()))))))())))))()()()())()(()()()(()())(()))()()()(()())))())())))()))))())))))))()()()()())(())())()())()))))(()()()()()))))()))())())))((()())()())))()))()))))(()())))()))))))))(((()))()()))))))))))))))))))))(()))(()((()))())))())(()))(()(()(())))))()(()))()))()()))))))))))))()((()())(())())()(())))))())()())((()()))))(()()))))())()(())()))))))))))))))))))))()))(()(()())))))))()()((()))()))))))((())))()))))))))((()))())()()))())()()))((()))())))))))))))(()())()))(())((()(()()))(()())(())))()())(()(())()()))))()))()(()))))))(()))))))))))(()))())))))))))())))))())))(())))))()))))(())())))))))))()(()))))()())))())(()))()())))))))))))))())()()))))()))))))())))))()))))(())(()()()()((())()))())(()))((())()))())())(())(()()))))()))(())()()((())(())))(())))()))())))))))))()(((((())())))(())()))))(())))((()))()(((((((()))))()()))(())))))()(()))))(()()))()))())))))))(()())()))))))))())))(()))())()))(())()((())())()())())(()(()))))()))))))((()())(())()()(()())))()()))(())(())(()))())))()))(()))()()))((((()))))()))((()()()))))()))()))())))(()))()))))(())))()))())()(()))()())))())))))))())))())))()()))))))(()))())())))()))()()())())))))))))))))())))()))(()()))))())))())()(())))())))))))))))))))))()()())())))))()()()((()(()))()()(())()())()))()))))()()()))))))((()))))))))()(()(()((((((()()((()())))))))))))()))())))))((())())(()))())))())))))())()()())(())))())))()())())(())))))))()()(())))()))())))())())())()))))))))()))(()()()())())())))(())())))))))()()())()))))())))())()(())())))))))()())()))(()()(())())))()(()((()()((()()(((((())(()())()))(())()))(())))(())))))))()))()))((()))()))()))))))))()))))))))((()()())(()))(((()))(())))()))((())(((())))()())))())))))((())))))(())())((((((())())()(()))()(()((()())))((())()(()(()))))(())(()()())(())))())((()(((())())))(((()())())))())()(())())((((()()))))())((()))()()()()(())(((((((()()()((()))())(()())))(())())((((()()(()))))()((())))((())()))()(((()))())))()))((()(()))(())(()((((())((((()()(()()))(((())(()))))((((()(()))(())))))((()))(()))((()(((()(()))(()(()((()(())(()(()(()(()()((()))())(((())(()(()))))(()))()()))(())))(())()(((())(()))()((((()()))))())(()))))((())()((((()(((()))())())(((()))()())((())(())())(())()(())()(()()((((((()()))))()()(((()()))))()())()(((()(()))(()(()())(()(()))))(((((()(((())())))))(((((()((()()((())())((((((()(())(()()((()()()()()()()(()()))()(((()))()))(((((((())(((()((()())()((((())(((()(())))()((()(()()()((())((()())()))()))())))())((((((()))(()(()()()))(()((()(()(()))()((()(((()()()((())(((((())()(()))())())((()(())))(()(()())(())((())())())(((()()()(())))))())(()))))))()))))))())((()()()))((()((((((()))(((()((((()()()(((()))())()(()()(((()((()()()()())()()))()()()(()(())((()))))(()))())))))))()(()()(((((())()(()(((((()((()(()()())(()((((((((()((((((())()((((()()()((()((()((((((()))((())))))))())()))((()(()))()(()()(()((())((()()((((((((((((()())(()()()))((((()((((((())(()))())(()()((()()))()(((((((()((()()((((((()(((())))((())))((((((((()()(((((((())(((((()())(((())((())()((((()(((((((()(()(((()((((((()(((()(((((((((((()()((()()(()))((()()(((()(((())))((((())()(()(((())()(()(((())(((((((((((()))())))((((((())((()()((((()())())((((()()))((())(((((()(()()(()()()((())(()((()()((((()(((((()((()(()((((()())((((((()(((((()()(()(()((((())))(())(())(())((((()(()()((((()((((()()((()((((((())))(((((()))))()))(()((((((((()(((())())(((())))(()(()((())(((()((()()(((((()((()()(((())()(()))(((((((())(()(((((()))((()((()((()))(())())((((()((((())()(()))(((()(((((((((((((((())(((((((((()))(((()(()()()()((((((()((())()((((((((()(())(((((((((((()(()((())()((()()(()(()()((((()()((())(()((()()(()()((((()(((((((())))((((())(())()(((()()((()()((((()((()(((()((())(((()()()((((()((((()()(()(()((((((((())(()(((((())(()())(((((((()())()(()((((()((())(()()())((((()()(((()((((())(())(()()(((((((((()()))()(((())(()(()((((((())(()()())(()))()()(((()(((()((())(()(((((((()(()(()((()(((((()(()((()(()((((((()((((()()((((()(((()((())(()(()((()()((((()()(())()(())(((())(()((((((((()())(((((((((()(())()((((())))()))()()(((((()()((((((())(()()(((()(()(((((((()(()(((((((())(())((((()((()(())))((((()()())(()))((()())((((()(((((()(()(())(()(()()())(((((()(((((()((((()()((((((((()()))(()((((((())((((())()(()(((()()()(((()(()(())(())(((((()(())())((((())(())(()(((()(((((())((((())())((()(((((((()(((())(()(()))(((((((((()((()((()()(()((((())(((()((())((((())(()(((()(((()(()((((()(((())(()(((()(()()(()(()((()()(()())(())())((()(()(((()(((()(((()()(((((((((()(((((((((()()(((()(((()())((((()(()(((()()()((())((((((((((())(()(((()((((()())((((()((()))(((()()()(((((()(((((((())((()())(()((((())((((((((())(()((()((((((((((()()((()((()()))(((()())()())()(((()())()()(()(()(((((((())()))(())()))())()()((())()((()((((()((()((())(((((()((((((()(())))(()))())(((()))((()()(()(((()))((((())()(((()))))()(()(())()(((((())(()(()(())(())()((()()()((((()(())((()())(()(()))(()(()(()()(())()()(()((())()((()))))()))((()(()()()()((()())(()))())()(()(((((((((())())((()((()((((((())()((((())(((())((()(()()()((())(()((())(((()((((()()((()(()(((((())()))()((((((()))((())(((()()))(((())(())()))(((((((())(())())()(())(((((()))()((()))()(()()((()()()()()())(((((";
//    cout << fo(a);
//}


//int steps(string a) {
//    const int str = 1000;
//    const int stolb = 1000;
//    int a1[str][stolb];
//    int i = 0;
//    int j = 0;
//    int i1 = 0;
//    int j1 = 0;
//    for (int ch = 0; ch < a.length(); ch+=2) {
//        if (a[ch] == '^') {
//            a1[i - 1][j] += 1;
//            i--;
//        }
//        if (a[ch] == 'v') {
//            a1[i+1][j] += 1;
//            i++;
//        }
//        if (a[ch] == '<') {
//            a1[i][j - 1] += 1;
//            j--;
//        }
//        if (a[ch] == '>') {
//            a1[i][j + 1] += 1;
//            j++;
//        }
//    }
//    for (int ch2 = 1; ch2 < a.length(); ch2 += 2) {
//        if (a[ch2] == '^') {
//            a1[i1 - 1][j1] += 1;
//            i1--;
//        }
//        if (a[ch2] == 'v') {
//            a1[i1 + 1][j1] += 1;
//            i1++;
//        }
//        if (a[ch2] == '<') {
//            a1[i1][j1 - 1] += 1;
//            j1--;
//        }
//        if (a[ch2] == '>') {
//            a1[i1][j1 + 1] += 1;
//            j1++;
//        }
//    }
//
//    for (int i = 0; i < str; i++) {
//        for (int j = 0; j < stolb; j++) {
//            cout << a1[i][j] << " ";
//        }
//    }
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int steps(const string& a) {
//    const int str = 1000;
//    const int stolb = 1000;
//
//    vector<vector<int>> a1(str, vector<int>(stolb, 0));
//
//    int i = str / 2;
//    int j = stolb / 2;
//    int i1 = str / 2; 
//    int j1 = stolb / 2;
//
//    for (int ch = 0; ch < a.length(); ch += 2) {
//        if (a[ch] == '^' && i > 0) {
//            a1[--i][j] += 1;
//        }
//        else if (a[ch] == 'v' && i < str - 1) {
//            a1[++i][j] += 1;
//        }
//        else if (a[ch] == '<' && j > 0) {
//            a1[i][--j] += 1;
//        }
//        else if (a[ch] == '>' && j < stolb - 1) {
//            a1[i][++j] += 1;
//        }
//    }
//
//    for (int ch2 = 1; ch2 < a.length(); ch2 += 2) {
//        if (a[ch2] == '^' && i1 > 0) {
//            a1[--i1][j1] += 1;
//        }
//        else if (a[ch2] == 'v' && i1 < str - 1) {
//            a1[++i1][j1] += 1;
//        }
//        else if (a[ch2] == '<' && j1 > 0) {
//            a1[i1][--j1] += 1;
//        }
//        else if (a[ch2] == '>' && j1 < stolb - 1) {
//            a1[i1][++j1] += 1;
//        }
//    }
//
//    int visited = 0;
//    for (int x = 0; x < str; x++) {
//        for (int y = 0; y < stolb; y++) {
//            if (a1[x][y] > 0) {
//                visited++;
//            }
//        }
//    }
//
//
//
//    return visited;
//}
//
//int main() {
//    string input = "^v^v^v^v^v^v^v";  
//    int result = steps(input);
//    cout << "k: " << result << endl;
//    return 0;
//}


//int main() {
//    int x = 123;
//    int d = x << 2;
////    cout << d;
////}
//
// 
// 
// 
// 
// 
//string DtoT(int num) {
//    string ch = "";
//    while (num > 0) {
//        ch += to_string(num % 2);
//        num = num / 2;
//    }
//    string f = "";
//    for (int i = ch.length(); i >= 0; i--) {
//        f += ch[i];
//    }
//    return f;
//}
//
//string DtoT_reverse(int num) {
//    string ch = "";
//    while (num > 0) {
//        ch += to_string(num % 2);
//        num = num / 2;
//    }
//    return ch;
//}
//
//int And(int a, int b) {
//    string ch1 = DtoT_reverse(a);
//    string ch2 = DtoT_reverse(b);
//
//    int min = ch1.length() > ch2.length() ? ch2.length() : ch1.length();
//
//    string f = "";
//
//    for (int i = 0; i < min; i++) {
//        if (ch1[i] == '1' && ch2[i] == '1') {
//            f += '1';
//        }
//        else f += '0';
//    }
//    int f_ch = 0;
//    for (int i = 0; i < f.length(); i++) {
//        if (f[i] == '1') {
//            f_ch += pow(2, i);
//        }
//    }
//    return f_ch;
//};
//
//int Or(int a, int b) {
//    string ch1 = DtoT_reverse(a);
//    string ch2 = DtoT_reverse(b);
//
//    int max = ch1.length() > ch2.length() ? ch1.length() : ch2.length();
//
//    while (ch2.length() != max || ch1.length() != max) {
//        if (ch2.length() < max) {
//            ch2 += '0';
//        }
//        if (ch1.length() < max) {
//            ch1 += '0';
//        }
//    }
//
//
//    string f = "";
//
//    for (int i = 0; i < max; i++) {
//        if (ch1[i] == '0' && ch2[i] == '0') {
//            f += '0';
//        }
//        else f += '1';
//    }
//    int f_ch = 0;
//    for (int i = 0; i < f.length(); i++) {
//        if (f[i] == '1') {
//            f_ch += pow(2, i);
//        }
//    }
//    return f_ch;
//};
//
//
//int PutIntToValue(int a, string x) {
//    int num = stoi(x);
//    num = a;
//    return num;
//}
//
//int main() {
//    cout << DtoT_reverse(123) << endl;
//    cout << DtoT_reverse(456);
//    cout << endl;
//    cout << And(123, 456);
//    cout << endl;
//    cout << Or(123, 456);
//}



#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>
#include <sstream>

using namespace std;

//string DtoT_reverse(int num) {
//    string ch = "";
//    while (num > 0) {
//        ch += to_string(num % 2);
//        num = num / 2;
//    }
//    return ch;
//}
//
//int And(int a, int b) {
//    string ch1 = DtoT_reverse(a);
//    string ch2 = DtoT_reverse(b);
//
//    int min = ch1.length() > ch2.length() ? ch2.length() : ch1.length();
//
//    string f = "";
//
//    for (int i = 0; i < min; i++) {
//        if (ch1[i] == '1' && ch2[i] == '1') {
//            f += '1';
//        }
//        else {
//            f += '0';
//        }
//    }
//
//    int f_ch = 0;
//    for (int i = 0; i < f.length(); i++) {
//        if (f[i] == '1') {
//            f_ch += pow(2, i);
//        }
//    }
//    return f_ch;
//}
//
//int Or(int a, int b) {
//    string ch1 = DtoT_reverse(a);
//    string ch2 = DtoT_reverse(b);
//
//    int max = ch1.length() > ch2.length() ? ch1.length() : ch2.length();
//
//    while (ch2.length() != max || ch1.length() != max) {
//        if (ch2.length() < max) {
//            ch2 += '0';
//        }
//        if (ch1.length() < max) {
//            ch1 += '0';
//        }
//    }
//
//    string f = "";
//
//    for (int i = 0; i < max; i++) {
//        if (ch1[i] == '0' && ch2[i] == '0') {
//            f += '0';
//        }
//        else {
//            f += '1';
//        }
//    }
//
//    int f_ch = 0;
//    for (int i = 0; i < f.length(); i++) {
//        if (f[i] == '1') {
//            f_ch += pow(2, i);
//        }
//    }
//    return f_ch;
//}
//
//int Not(int a) {
//    return 65535 - a;
//}
//
//int LShift(int a, int n) {
//    return a << n;
//}
//
//int RShift(int a, int n) {
//    return a >> n;
//}
//
//int main() {
//    unordered_map<string, int> signals;
//
//    // Инициализация сигналов
//    signals["x"] = 123;
//    signals["y"] = 456;
//    signals["a"] = 10;
//    signals["b"] = 5;
//
//    // Входные строки
//    string input;
//
//    while (getline(cin, input)) {
//        istringstream iss(input);
//        string operand1, operator_symbol, operand2, result;
//
//        // Чтение строки и разбиение на части
//        iss >> operand1 >> operator_symbol >> operand2 >> result;
//
//        // Применение операции в зависимости от оператора
//        if (operator_symbol == "AND") {
//            signals[result] = And(signals[operand1], signals[operand2]);
//        }
//        else if (operator_symbol == "OR") {
//            signals[result] = Or(signals[operand1], signals[operand2]);
//        }
//        else if (operator_symbol == "NOT") {
//            signals[result] = Not(signals[operand1]);
//        }
//        else if (operator_symbol == "LSHIFT") {
//            int shift_value;
//            iss >> shift_value;
//            signals[result] = LShift(signals[operand1], shift_value);
//        }
//        else if (operator_symbol == "RSHIFT") {
//            int shift_value;
//            iss >> shift_value;
//            signals[result] = RShift(signals[operand1], shift_value);
//        }
//
//        // Вывод результата
//        cout << result << ": " << signals[result] << endl;
//    }
//
//    return 0;
//}

//////////////int main() {
//////////////    string town1 = "";
//////////////    string town2 = "";
//////////////    int distance = 0;
//////////////    vector<string> towns_unique = {};
//////////////    while (town1 != "0") {
//////////////        cin >> town1 >> town2 >> distance;
//////////////        if (find(towns_unique.begin(), towns_unique.end(), town1) == towns_unique.end()) {
//////////////            towns_unique.push_back(town1);
//////////////        }
//////////////        if (find(towns_unique.begin(), towns_unique.end(), town2) == towns_unique.end()) {
//////////////            towns_unique.push_back(town2);
//////////////        }
//////////////    }
//////////////}



//int findShortestRoute(vector<vector<int>> dist) {
//    vector<int> cites = {};
//    for (int i = 0; i < dist.size(); ++i) {
//        cites.push_back(i);
//    }
//    int minDistance = INT_MAX;
//    do {
//        int currentDistance = 0;
//        for (int i = 0; i < dist.size() - 1; ++i) {
//            currentDistance += dist[cites[i]][cites[i + 1]];
//        }
//        minDistance = min(currentDistance, minDistance);
//    } while (next_permutation(cites.begin(), cites.end()));
//
//    return minDistance;
//}
//
//
//
//int main() {
//
//    vector<vector<int>> distances = {
//        {0, 464, 518},   // Лондон
//        {464, 0, 141},   // Дублин
//        {518, 141, 0}    // Белфаст
//    };
//
//    int shortest = findShortestRoute(distances);
//    cout << "Answer is: " << shortest << endl;
//
//    return 0;
//}

//
//#include <iostream>
//#include <fstream>
//#include <string>     
//
//using namespace std;
//
//int main()
//{
//    string line;
//    ifstream in("02.txt");
//
//    vector<vector<int>> matrix = {};
//
//    while (getline(in, line)) {
//        stringstream ss(line);  
//        vector<int> row;
//        string num;
//
//     
//        while (ss >> num) {
//            row.push_back(stoi(num));  
//        }
//
//        matrix.push_back(row);  
//    }
//
//    in.close();
//    int sum = 0;
//    for (auto row : matrix) {
//        sum += *std::max_element(row.begin(), row.end());
//        sum -= *std::min_element(row.begin(), row.end());
//    }
//    cout << sum;
//    return 0;
//}


//#include <iostream>
//#include <fstream>
//#include <string>     
//
//using namespace std;
//
//int main()
//{
//    string line;
//    ifstream in("03.txt");
//
//    vector<vector<int>> matrix = {};
//
//    while (getline(in, line)) {
//        stringstream ss(line);  
//        vector<int> row;
//        string num;
//
//     
//        while (ss >> num) {
//            row.push_back(stoi(num));  
//        }
//
//        matrix.push_back(row);  
//    }
//
//    in.close();
//    int k = 0;
//    for (auto row : matrix) {
//        if (row[0] + row[1] > row[2] && row[1] + row[2] > row[0] && row[2] + row[0] > row[1]) k++;
//    }
//    cout << k;
//    return 0;
//}

//
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <map>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ifstream in("06.txt");  
//
//    vector<string> vec;
//    string line;
//
//
//    while (getline(in, line)) {
//        vec.push_back(line);
//    }
//
//    in.close();
//    string result = " ";
//    for (int i = 0; i < vec[i].length(); i++) {
//        map<char, int> counter = {};
//        for (int j = 0; j < vec.size(); j++) {
//            counter[vec[j][i]]++;
//        }
//
//        char min_char = ' ';
//        int min_char_i = vec.size() + 1;
//
//
//        for (auto a : counter) {
//            if (a.second < min_char_i) {
//                min_char = a.first;
//                min_char_i = a.second;
//            }
//        }
//
//        result += min_char;
//    }
//    cout << "Corrected message: " << result << endl;
//
//    return 0;
//}


#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
//
//int main() {
//    ifstream in("08.txt");
//
//    vector<string> vec;
//    string line;
//
//
//    while (getline(in, line)) {
//        vec.push_back(line);
//    }
//
//    in.close();
//
//    int str = 6;
//    int stolb = 50;
//
//    int resh_str = 0;
//    int resh_stolb = 0;
//
//    int rotate_kol = 0;
//    int rotate_row = 0;
//
//    int rotate_col = 0;
//    int rotate_kol_col = 0;
//
//    vector<vector<char>> matrix(str, vector<char>(stolb, '0'));
//    for (auto a : vec) {
//        if (a.rfind("rect ",0) == 0) 
//        {
//            string sub_str = a.substr(5);
//
//            size_t x_pos = sub_str.find('x'); 
//            if (x_pos != string::npos) {
//                resh_stolb = stoi(sub_str.substr(0, x_pos));
//                resh_str = stoi(sub_str.substr(x_pos + 1));
//            }
//
//            for (int i = 0; i < resh_str; i++) {
//                for (int j = 0; j < resh_stolb; j++) {
//                    matrix[i][j] = '#';
//                }
//            }
//        }
//        if (a.rfind("rotate row ", 0) == 0) 
//        {
//            string sub_str = a.substr(13);
//            size_t by_pos = sub_str.find(" by ");
//            if (by_pos != string::npos) {
//                rotate_row = stoi(sub_str.substr(0, by_pos));
//                rotate_kol = stoi(sub_str.substr(by_pos + 4));
//            }
//
//            vector<char> row = matrix[rotate_row];
//            vector<char> new_row(stolb, '0');
//
//            for (int j = 0; j < stolb; j++) {
//                int new_pos = (j + rotate_kol) % stolb;
//                new_row[new_pos] = row[j];
//            }
//
//            matrix[rotate_row] = new_row;
//        }
//        if (a.rfind("rotate column ", 0) == 0)
//        {
//            string sub_str = a.substr(16);
//            size_t by_pos = sub_str.find(" by ");
//            if (by_pos != string::npos) {
//                rotate_col = stoi(sub_str.substr(0, by_pos));
//                rotate_kol_col = stoi(sub_str.substr(by_pos + 4));
//            }
//
//            vector<char> new_kol(str, '0' );
//            vector<char> kol(str, '0');
//
//            for (int i = 0; i < str; i++) {
//                kol[i] = matrix[i][rotate_col];
//            }
//
//            for (int i = 0; i < str; i++) {
//                int new_pos = (i + rotate_kol_col) % str;
//                new_kol[new_pos] = kol[i];
//            }
//
//            for (int i = 0; i < str; i++) {
//                matrix[i][rotate_col] = new_kol[i];
//            }
//        }
//    }
//    int k = 0;
//    for (auto a : matrix) {
//        for (auto a1 : a) {
//            if (a1 == '#') k++;
//        }
//    }
//    cout << k;
//}


//int main() {
//        ifstream in("05.txt");
//    
//        string str;
//        string line;
//    
//    
//        while (getline(in, line)) {
//            str = line;
//        }
//    
//        in.close();
//
//        string a = "AadAAbBacddaAD";
//        size_t i = 0;
//        while (i < a.length() - 1){
//            if (abs(int(a[i]) - int(a[i + 1])) == 32) {
//                a.erase(i, 2);
//                if (i > 0) {
//                    i--;
//                }
//            }
//            else {
//                i++;
//            }
//        }
//        cout << a;
//}



//int main() {
//        ifstream in("09.txt");
//    
//        string str;
//        string line;
//    
//    
//        while (getline(in, line)) {
//            str = line;
//        }
//    
//        in.close();
//
//        //string a = "AadAAbBacddaAD";
//        string time_str = "";
//        string new_fin_str = "";
//        int umn = 1;
//        for (int i = 0; i < str.length(); i++) {
//            if (str[i] == '(') {
//                int j = i + 1;
//                while (str[j] != ')') {
//                    time_str += str[j];
//                    j++;
//                }
//                size_t x_pos = time_str.find('x');
//                int kol_sim = stoi(time_str.substr(0, x_pos));
//                int repit_sim = stoi(time_str.substr(x_pos + 1));
//                string sub_str = str.substr(j + 1, kol_sim);
//                for (int k = 0; k < repit_sim; k++) {
//                    new_fin_str += sub_str;
//                }
//                i = j + kol_sim ;
//                time_str.clear();
//            }
//            else {
//                new_fin_str += str[i];
//            }
//        }
//        cout << new_fin_str;
//}


int main() {
    ifstream in("09.txt");

    string str;


    while (getline(in, str)) {}

    in.close();

    string time_str = "";
    string new_fin_str = "";
    int umn = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            int j = i + 1;
            while (str[j] != ')') {
                time_str += str[j];
                j++;
            }
            size_t x_pos = time_str.find('x');
            int kol_sim = stoi(time_str.substr(0, x_pos));
            int repit_sim = stoi(time_str.substr(x_pos + 1));
            if (str[str.find(')', i + 1) + 1] == '(' && (str.find(')', i + 1) < str.find('(', i + 1))) {
                umn *= repit_sim;
                i = str.find(')', i + 1);
                time_str.clear();
                continue;
            }
            else {
                string sub_str = str.substr(j + 1, kol_sim);
                for (int k = 0; k < repit_sim * umn; k++) {
                    new_fin_str += sub_str;
                }
                i = j + kol_sim;
                time_str.clear();
                umn = 1;
            }
        }
        else {
            new_fin_str += str[i];
        }
    }
    int counter = 0;
    for (int i = 0; i < new_fin_str.length(); i++) {
        if (new_fin_str[i] != ' ') {
            counter++;
        }
    }
    cout << new_fin_str;
}








//#include <iostream>
//#include <fstream>
//#include <string>
//#include <unordered_map>
//#include <sstream>
//#include <functional>
//#include <stdexcept>
//
//using namespace std;
//
//unordered_map<string, function<uint16_t()>> operations;
//unordered_map<string, uint16_t> values;
//
//uint16_t getValue(const string& wire) {
//    if (isdigit(wire[0])) {
//        return stoi(wire); 
//    }
//    if (values.count(wire)) {
//        return values[wire]; 
//    }
//    if (!operations.count(wire)) {
//        throw invalid_argument("Неизвестный провод: " + wire);
//    }
//    uint16_t result = operations[wire]();
//    values[wire] = result; 
//    return result;
//}
//
//void addOperation(const string& wire, const string& expr) {
//    istringstream iss(expr);
//    string part1, op, part2;
//
//    if (expr.find("AND") != string::npos) {
//        iss >> part1 >> op >> part2;
//        operations[wire] = [part1, part2]() {
//            return getValue(part1) & getValue(part2);
//            };
//    }
//    else if (expr.find("OR") != string::npos) {
//        iss >> part1 >> op >> part2;
//        operations[wire] = [part1, part2]() {
//            return getValue(part1) | getValue(part2);
//            };
//    }
//    else if (expr.find("LSHIFT") != string::npos) {
//        iss >> part1 >> op >> part2;
//        int shift = stoi(part2);
//        operations[wire] = [part1, shift]() {
//            return getValue(part1) << shift;
//            };
//    }
//    else if (expr.find("RSHIFT") != string::npos) {
//        iss >> part1 >> op >> part2;
//        int shift = stoi(part2);
//        operations[wire] = [part1, shift]() {
//            return getValue(part1) >> shift;
//            };
//    }
//    else if (expr.find("NOT") != string::npos) {
//        iss >> op >> part1;
//        operations[wire] = [part1]() {
//            return static_cast<uint16_t>(~getValue(part1)) & 0xFFFF;
//            };
//    }
//    else {
//        part1 = expr;
//        operations[wire] = [part1]() {
//            return getValue(part1);
//            };
//    }
//}
//
//int main() {
//    ifstream input("07.txt");
//    if (!input) {
//        cerr << "Не удалось открыть файл." << endl;
//        return 1;
//    }
//
//    string line;
//    while (getline(input, line)) {
//        size_t arrowPos = line.find(" -> ");
//        string expr = line.substr(0, arrowPos);
//        string wire = line.substr(arrowPos + 4);
//        addOperation(wire, expr);
//    }
//
//    input.close();
//
//    try {
//        uint16_t signalA = getValue("a");
//        cout << "Сигнал на проводе a: " << signalA << endl;
//    }
//    catch (const exception& ex) {
//        cerr << "Ошибка: " << ex.what() << endl;
//        return 1;
//    }
//
//    return 0;
//}
