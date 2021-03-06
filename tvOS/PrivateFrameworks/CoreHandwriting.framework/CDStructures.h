//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct CHCandidateResult {
    unsigned int _field1;
    float _field2;
};

struct CHNeuralNetwork {
    char *_field1;
    unsigned long long _field2;
    unsigned int *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    id _field8;
    id _field9;
};

struct CJKChar {
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> strokeBounds;
    struct vector<bool, std::__1::allocator<bool>> strokeBoundsValidity;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> strokes;
    unsigned long long currentStrokeIndex;
    unsigned int mSize;
    struct Matrix<double> bitmap;
    double lineHeight;
    vector_12bd641b sparseBitmap;
};

struct LatticePath;

struct Matrix<double> {
    CDUnknownFunctionPointerType *_vptr$Matrix;
    double *_data;
    unsigned int _w;
    unsigned int _h;
};

struct Matrix<float> {
    CDUnknownFunctionPointerType *_field1;
    float *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct Network {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    unsigned long long _field2;
    struct vector<NetworkNode, std::__1::allocator<NetworkNode>> _field3;
    set_6c38b8e1 _field4;
    struct vector<NetworkEdge, std::__1::allocator<NetworkEdge>> _field5;
    struct vector<const NetworkEdge *, std::__1::allocator<const NetworkEdge *>> _field6;
    struct SymbolMap _field7;
    _Bool _field8;
    struct map<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>>> _field9;
    struct set<uint128, std::__1::less<uint128>, std::__1::allocator<uint128>> _field10;
    unsigned int *_field11;
    unsigned long long _field12;
};

struct NetworkEdge;

struct NetworkNode;

struct PatternGraph {
    struct list<PatternGraph *, std::__1::allocator<PatternGraph *>> _field1;
    unsigned int _field2;
};

struct SymbolMap {
    CDUnknownFunctionPointerType *_field1;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field2;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long>>> _field3;
};

struct VariantMap {
    int *_field1;
    int *_field2;
    int *_field3;
    int _field4;
    int *_field5;
    unsigned long long _field6;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> {
    void *__value_;
};

struct __list_node_base<CGPoint, void *> {
    struct __list_node_base<CGPoint, void *> *_field1;
    struct __list_node_base<CGPoint, void *> *_field2;
};

struct __list_node_base<PatternGraph *, void *> {
    struct __list_node_base<PatternGraph *, void *> *_field1;
    struct __list_node_base<PatternGraph *, void *> *_field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct list<CGPoint, std::__1::allocator<CGPoint>> {
    struct __list_node_base<CGPoint, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<CGPoint, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<PatternGraph *, std::__1::allocator<PatternGraph *>> {
    struct __list_node_base<PatternGraph *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<PatternGraph *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
    struct __tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>> {
    struct __tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>>> {
    struct __tree<std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, std::__1::less<unsigned long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct set<uint128, std::__1::less<uint128>, std::__1::allocator<uint128>> {
    struct __tree<uint128, std::__1::less<uint128>, std::__1::allocator<uint128>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<uint128, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<uint128>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>> {
    struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned long>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vector<CGPoint, std::__1::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
};

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *_field1;
    struct CGRect *_field2;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *_field1;
    } _field3;
};

struct vector<CGVector, std::__1::allocator<CGVector>> {
    struct CGVector *__begin_;
    struct CGVector *__end_;
    struct __compressed_pair<CGVector *, std::__1::allocator<CGVector>> {
        struct CGVector *__value_;
    } __end_cap_;
};

struct vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>> {
    struct CHCandidateResult *_field1;
    struct CHCandidateResult *_field2;
    struct __compressed_pair<CHCandidateResult *, std::__1::allocator<CHCandidateResult>> {
        struct CHCandidateResult *_field1;
    } _field3;
};

struct vector<LatticePath, std::__1::allocator<LatticePath>> {
    struct LatticePath *_field1;
    struct LatticePath *_field2;
    struct __compressed_pair<LatticePath *, std::__1::allocator<LatticePath>> {
        struct LatticePath *_field1;
    } _field3;
};

struct vector<NetworkEdge, std::__1::allocator<NetworkEdge>> {
    struct NetworkEdge *_field1;
    struct NetworkEdge *_field2;
    struct __compressed_pair<NetworkEdge *, std::__1::allocator<NetworkEdge>> {
        struct NetworkEdge *_field1;
    } _field3;
};

struct vector<NetworkNode, std::__1::allocator<NetworkNode>> {
    struct NetworkNode *_field1;
    struct NetworkNode *_field2;
    struct __compressed_pair<NetworkNode *, std::__1::allocator<NetworkNode>> {
        struct NetworkNode *_field1;
    } _field3;
};

struct vector<bool, std::__1::allocator<bool>> {
    unsigned long long *__begin_;
    unsigned long long __size_;
    struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long>> {
        unsigned long long __value_;
    } __cap_alloc_;
};

struct vector<const NetworkEdge *, std::__1::allocator<const NetworkEdge *>> {
    struct NetworkEdge **_field1;
    struct NetworkEdge **_field2;
    struct __compressed_pair<const NetworkEdge **, std::__1::allocator<const NetworkEdge *>> {
        struct NetworkEdge **_field1;
    } _field3;
};

struct vector<const void *, std::__1::allocator<const void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<const void **, std::__1::allocator<const void *>> {
        void **_field1;
    } _field3;
};

struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
    vector_8f06c10f *__begin_;
    vector_8f06c10f *__end_;
    struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double>>*, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
        vector_8f06c10f *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *_field1;
    } _field3;
};

#if 0
// Names with conflicting types:
typedef struct ?<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> **_field1;
} vector_027a6188;

typedef struct ?<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> __end_cap_;
} vector_74a7c1d0;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    double groupingDuration;
    double recognitionDuration;
    double totalDuration;
} CDStruct_a0ca6847;

// Template types
typedef struct Matrix<float> {
    CDUnknownFunctionPointerType *_field1;
    float *_field2;
    unsigned int _field3;
    unsigned int _field4;
} Matrix_273a43f8;

typedef struct list<CGPoint, std::__1::allocator<CGPoint>> {
    struct __list_node_base<CGPoint, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<CGPoint, void *>>> {
        unsigned long long _field1;
    } _field2;
} list_9bacdeb6;

typedef struct map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
    struct __tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_cde2a89c;

typedef struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>> {
    struct __tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_fc1db4e5;

typedef struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_0512c6b1;

typedef struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>> {
    struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned long>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} set_6c38b8e1;

typedef struct vector<CGPoint, std::__1::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
} vector_2e7754b6;

typedef struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *_field1;
    struct CGRect *_field2;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *_field1;
    } _field3;
} vector_ea45b3ba;

typedef struct vector<CGVector, std::__1::allocator<CGVector>> {
    struct CGVector *__begin_;
    struct CGVector *__end_;
    struct __compressed_pair<CGVector *, std::__1::allocator<CGVector>> {
        struct CGVector *__value_;
    } __end_cap_;
} vector_5071ab7f;

typedef struct vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>> {
    struct CHCandidateResult *_field1;
    struct CHCandidateResult *_field2;
    struct __compressed_pair<CHCandidateResult *, std::__1::allocator<CHCandidateResult>> {
        struct CHCandidateResult *_field1;
    } _field3;
} vector_06f11b7b;

typedef struct vector<LatticePath, std::__1::allocator<LatticePath>> {
    struct LatticePath *_field1;
    struct LatticePath *_field2;
    struct __compressed_pair<LatticePath *, std::__1::allocator<LatticePath>> {
        struct LatticePath *_field1;
    } _field3;
} vector_7a3f6ffc;

typedef struct vector<const void *, std::__1::allocator<const void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<const void **, std::__1::allocator<const void *>> {
        void **_field1;
    } _field3;
} vector_de520796;

typedef struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
} vector_8f06c10f;

typedef struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__value_;
    } __end_cap_;
} vector_12bd641b;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *_field1;
    } _field3;
} vector_eb9481f9;

