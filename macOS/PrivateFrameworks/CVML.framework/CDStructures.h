//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct ChnsFeat {
    int _field1;
    int _field2;
    struct hog _field3;
    struct gradient _field4;
};

struct ClusteringAbstract;

struct DML;

struct DTreeApply;

struct DTreeNode;

struct FaceFrontalizer;

struct FaceRegionMap;

struct FaceboxAligner;

struct FastRegistration_Signatures {
    float *piRow;
    unsigned long long nPiRow;
    struct Projections_meanStdTable piRowTable;
    float *piCol;
    unsigned long long nPiCol;
    struct Projections_meanStdTable piColTable;
    char *_memoryContainer;
};

struct GreedyClustererFacesAPI;

struct ImageClassfier_Graph;

struct ImageClassifierAbstract {
    CDUnknownFunctionPointerType *_field1;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field2;
    struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> _field3;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field4;
    int _field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
};

struct ImageClassifier_HierarchicalModel {
    struct ImageClassfier_Graph *_field1;
};

struct ImageDescriptorAugmenterFlip;

struct ImageDescriptorBufferAbstract {
    CDUnknownFunctionPointerType *_field1;
    struct vector<long long, std::__1::allocator<long long>> _field2;
    struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int>>> _field3;
    void *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    _Bool _field8;
};

struct ImageDescriptorBufferFloat32 {
    CDUnknownFunctionPointerType *_field1;
    struct vector<long long, std::__1::allocator<long long>> _field2;
    struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int>>> _field3;
    void *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    _Bool _field8;
    unsigned long long _field9;
    int _field10;
    float *_field11;
};

struct ImageDescriptorProcessorAbstract {
    CDUnknownFunctionPointerType *_field1;
};

struct LandmarkAttributes;

struct LandmarkDetector;

struct MPClusteringTreeNode {
    id _field1;
    int _field2;
    float _field3;
    float _field4;
    int _field5;
    struct MPClusteringTreeNode *_field6;
    struct MPClusteringTreeNode *_field7;
    struct MPClusteringTreeNode *_field8;
    struct MPClusteringTreeNode *_field9;
};

struct ModelValues;

struct ObjectDetector_DCNFaceDetector;

struct Projections_meanStdTable {
    float *sumTable;
    float *sumSqTable;
};

struct SimilarityMatrixAbstract;

struct TemplateObjectDetectorApply {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    _Bool _field5;
    float _field6[2];
    float _field7[2];
    float _field8;
    _Bool _field9;
    _Bool _field10;
    float _field11;
    float _field12;
    int _field13;
    float _field14;
    struct hog _field15;
    struct ChnsFeat _field16;
    int _field17;
    struct vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply>> _field18;
    struct vector<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>>> _field19;
    struct vector<float, std::__1::allocator<float>> _field20;
    struct vector<vision::hum::DTreeNode *, std::__1::allocator<vision::hum::DTreeNode *>> _field21;
    float _field22;
    struct adaBoostApply _field23;
    struct linearSVMApply _field24;
    id _field25;
};

struct VIPIdentification;

struct _Geometry2D_point2D_ {
    float x;
    float y;
};

struct _Geometry2D_rect2D_ {
    struct _Geometry2D_point2D_ origin;
    struct _Geometry2D_size2D_ size;
};

struct _Geometry2D_size2D_ {
    float height;
    float width;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct adaBoostApply {
    struct vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply>> _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct gradient;

struct hog {
    struct gradient _field1;
};

struct linearSVMApply {
    struct vector<float, std::__1::allocator<float>> _field1;
    float _field2;
    struct vector<float, std::__1::allocator<float>> _field3;
};

struct map<(anonymous namespace)::Faceprint, int, std::__1::less<(anonymous namespace)::Faceprint>, std::__1::allocator<std::__1::pair<const (anonymous namespace)::Faceprint, int>>> {
    struct __tree<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true>, std::__1::allocator<std::__1::__value_type<(anonymous namespace)::Faceprint, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>;

struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int>>> {
    struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<long long, std::__1::vector<long long, std::__1::allocator<long long>>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct mapped_model_file {
    int _field1;
    void *_field2;
    unsigned long long _field3;
};

struct model_file_cache;

struct pair<long long, long long>;

struct shared_ptr<DML> {
    struct DML *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<unsigned char> {
    char *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ClusteringAbstract> {
    struct ClusteringAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceFrontalizer> {
    struct FaceFrontalizer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceRegionMap> {
    struct FaceRegionMap *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceboxAligner> {
    struct FaceboxAligner *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::GreedyClustererFacesAPI> {
    struct GreedyClustererFacesAPI *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageClassifierAbstract> {
    struct ImageClassifierAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> {
    struct ImageClassifier_HierarchicalModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> {
    struct ImageDescriptorAugmenterFlip *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> {
    struct ImageDescriptorProcessorAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::LandmarkAttributes> {
    struct LandmarkAttributes *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::LandmarkDetector> {
    struct LandmarkDetector *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ModelValues> {
    struct ModelValues *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> {
    struct ObjectDetector_DCNFaceDetector *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::SimilarityMatrixAbstract> {
    struct SimilarityMatrixAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::VIPIdentification> {
    struct VIPIdentification *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache>> {
    struct __compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache>> {
        struct model_file_cache *__value_;
    } __ptr_;
};

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

struct vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *>> {
    struct MPClusteringTreeNode **_field1;
    struct MPClusteringTreeNode **_field2;
    struct __compressed_pair<MPClusteringTreeNode **, std::__1::allocator<MPClusteringTreeNode *>> {
        struct MPClusteringTreeNode **_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>>> {
    struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>> *_field1;
    struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>> *_field2;
    struct __compressed_pair<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>*, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>>> {
        struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>> *_field1;
    } _field3;
};

struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long>>> {
    struct pair<long long, long long> *_field1;
    struct pair<long long, long long> *_field2;
    struct __compressed_pair<std::__1::pair<long long, long long>*, std::__1::allocator<std::__1::pair<long long, long long>>> {
        struct pair<long long, long long> *_field1;
    } _field3;
};

struct vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply>> {
    struct DTreeApply *_field1;
    struct DTreeApply *_field2;
    struct __compressed_pair<vision::hum::DTreeApply *, std::__1::allocator<vision::hum::DTreeApply>> {
        struct DTreeApply *_field1;
    } _field3;
};

struct vector<vision::hum::DTreeNode *, std::__1::allocator<vision::hum::DTreeNode *>> {
    struct DTreeNode **_field1;
    struct DTreeNode **_field2;
    struct __compressed_pair<vision::hum::DTreeNode **, std::__1::allocator<vision::hum::DTreeNode *>> {
        struct DTreeNode **_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

// Template types
typedef struct map<long long, std::__1::vector<long long, std::__1::allocator<long long>>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_2e2a8070;

typedef struct vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *>> {
    struct MPClusteringTreeNode **_field1;
    struct MPClusteringTreeNode **_field2;
    struct __compressed_pair<MPClusteringTreeNode **, std::__1::allocator<MPClusteringTreeNode *>> {
        struct MPClusteringTreeNode **_field1;
    } _field3;
} vector_e14a6833;

typedef struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long>>> {
    struct pair<long long, long long> *_field1;
    struct pair<long long, long long> *_field2;
    struct __compressed_pair<std::__1::pair<long long, long long>*, std::__1::allocator<std::__1::pair<long long, long long>>> {
        struct pair<long long, long long> *_field1;
    } _field3;
} vector_22dfb71c;

