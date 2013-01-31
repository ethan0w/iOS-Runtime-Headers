/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficDynamicTile : VKTile  {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    } _downloadKey;
    struct shared_ptr<zilch::TrafficDynamicTile> { 
        struct TrafficDynamicTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _tile;
    struct unordered_multimap<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, std::__1::equal_to<long long>, vk_allocator<std::__1::pair<const long long, const zilch::TrafficDynamicTile::Flow *>> > { 
        struct __hash_table<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, std::__1::__unordered_map_hasher<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::equal_to<long long>, true>, vk_allocator<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>> > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> *[], std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> *>> > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> **, std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> *>> > { 
                    struct __hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> *> > { 
                        struct __compressed_pair<unsigned long, vk_allocator<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> *>, vk_allocator<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *>> > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> *> { 
                    struct __hash_node<std::__1::pair<long long, const zilch::TrafficDynamicTile::Flow *>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::equal_to<long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _flows;
}

@property(readonly) long updateTime;
@property(readonly) unsigned int incidentCount;


- (long)updateTime;
- (id)initWithTileIgnoringFlows:(struct shared_ptr<zilch::TrafficDynamicTile> { struct TrafficDynamicTile {} *x1; struct __shared_weak_count {} *x2; })arg1 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 data:(id)arg3;
- (const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; long long x7; long long x8; long long x9; int x10; unsigned char x11; boolx12; }*)incidentAtIndex:(unsigned int)arg1;
- (unsigned int)incidentCount;
- (int)flowForRoadId:(long long)arg1 buffer:(const struct Flow {}**)arg2 maxSize:(int)arg3;
- (BOOL)writeDataToDirectory:(id)arg1 error:(id*)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
