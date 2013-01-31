/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLGroupCullableMesh : VGLMesh  {
    struct vector<VGLGroupInfo, vk_allocator<VGLGroupInfo> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<VGLGroupInfo *, vk_allocator<VGLGroupInfo> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    } _groupInfoCollection;
    struct { 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } indexRange; 
        struct { 
            float x0; 
            float x1; 
            float y0; 
            float y1; 
            float z0; 
            float z1; 
        } bounds; 
        struct vector<int, vk_allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, vk_allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } groupInfoIndices; 
    } _fragments[16];
    float _fragmentSize;
    struct bitset<16> { 
        unsigned int __first_; 
    } _fragmentsToDrawBitset;
    BOOL _didFreeze;
    struct unordered_map<unsigned int, unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, vk_allocator<std::__1::pair<const unsigned int, unsigned int>> > { 
        struct __hash_table<std::__1::pair<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, unsigned int, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, unsigned int, std::__1::equal_to<unsigned int>, true>, vk_allocator<std::__1::pair<unsigned int, unsigned int>> > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *[], std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *>> > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> **, std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *>> > { 
                    struct __hash_node<std::__1::pair<unsigned int, unsigned int>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> > { 
                        struct __compressed_pair<unsigned long, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *>, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *>> > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> { 
                    struct __hash_node<std::__1::pair<unsigned int, unsigned int>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, unsigned int, std::__1::hash<unsigned int>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, unsigned int, std::__1::equal_to<unsigned int>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _groupIDToInfoIndex;
}


- (BOOL)groupContainingPositionA:(struct { float x1; float x2; float x3; })arg1 positionB:(struct { float x1; float x2; float x3; })arg2 groupID:(unsigned int*)arg3;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 context:(id)arg3;
- (void)drawGroup:(unsigned int)arg1 context:(id)arg2;
- (void)drawInPreparedCulls:(id)arg1;
- (void)drawInPreparedCulls:(id)arg1 excludeGroup:(int)arg2;
- (void)prepareCullsInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 numRects:(unsigned int)arg2;
- (BOOL)addGroupForIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 boundingBox:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 center:(struct { float x1; float x2; float x3; })arg3 groupID:(unsigned int)arg4;
- (void)freeze;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 excludeGroup:(int)arg3 context:(id)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
