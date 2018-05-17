//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct NSDirectionalEdgeInsets {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct _NUIBoxArrangement {
    id container;
    _Bool baselineRelative;
    int horzDist;
    int vertDist;
    vector_eb457d57 cells;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIBoxArrangementCell;

struct _NUIGridArrangement {
    id container;
    _Bool baselineRelative;
    int horzDist;
    int vertDist;
    vector_f8404f95 cells;
    vector_b8a5df6e columns;
    vector_b8a5df6e rows;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIGridArrangementCell;

struct _NUIGridArrangementDimension;

struct _NUIGridViewDimensionConfiguration;

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct nui_size_cache {
    struct __tree<std::__1::__value_type<CGSize, CGSize>, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true>, std::__1::allocator<std::__1::__value_type<CGSize, CGSize>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CGSize, CGSize>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true>> {
            unsigned long __value_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>> {
                unsigned long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>*>> {
                unsigned long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::hash<UIView *>, std::__1::equal_to<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange>>>> {
    struct __hash_table<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::__unordered_map_hasher<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::hash<UIView *>, true>, std::__1::__unordered_map_equal<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::equal_to<UIView *>, true>, std::__1::allocator<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::hash<UIView *>, true>> {
            unsigned long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::equal_to<UIView *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned int, const std::__1::pair<UIView *, UIView *>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const std::__1::pair<UIView *, UIView *>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, std::__1::hash<unsigned int>, true>> {
            unsigned long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const std::__1::pair<UIView *, UIView *>>, std::__1::equal_to<unsigned int>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
};

struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
    struct _NUIGridViewDimensionConfiguration *__begin_;
    struct _NUIGridViewDimensionConfiguration *__end_;
    struct __compressed_pair<_NUIGridViewDimensionConfiguration *, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
        struct _NUIGridViewDimensionConfiguration *__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    float leading;
    float trailing;
} CDStruct_cc988be4;

// Template types
typedef struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__value_;
    } __end_cap_;
} vector_eb457d57;

typedef struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
} vector_f8404f95;

typedef struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
} vector_b8a5df6e;
