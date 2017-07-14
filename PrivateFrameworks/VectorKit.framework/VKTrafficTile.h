/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficTile : VKVectorTile {
    struct TrafficMeshStyle { 
        int _style[4]; 
    }  _builtTrafficStyle;
    NSData * _data;
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
    }  _dataKey;
    VKTileKeyMap * _dynamicTiles;
    NSMutableArray * _incidents;
    struct unique_ptr<md::PilledTrafficLayer, std::__1::default_delete<md::PilledTrafficLayer> > { 
        struct __compressed_pair<md::PilledTrafficLayer *, std::__1::default_delete<md::PilledTrafficLayer> > { 
            struct PilledTrafficLayer {} *__first_; 
        } __ptr_; 
    }  _pilledTrafficLayer;
    struct unique_ptr<md::SolidTrafficLayer, std::__1::default_delete<md::SolidTrafficLayer> > { 
        struct __compressed_pair<md::SolidTrafficLayer *, std::__1::default_delete<md::SolidTrafficLayer> > { 
            struct SolidTrafficLayer {} *__first_; 
        } __ptr_; 
    }  _solidTrafficLayer;
    struct FeatureAttributeSet { 
        struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { 
            struct FeatureAttributePair {} *__begin_; 
            struct FeatureAttributePair {} *__end_; 
            struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { 
                struct FeatureAttributePair {} *__first_; 
            } __end_cap_; 
        } _attributes; 
    }  _styleAttributes;
    struct TrafficSkeletonTile { 
        struct vector<zilch::TrafficSkeletonTile::Record, std::__1::allocator<zilch::TrafficSkeletonTile::Record> > { 
            struct Record {} *__begin_; 
            struct Record {} *__end_; 
            struct __compressed_pair<zilch::TrafficSkeletonTile::Record *, std::__1::allocator<zilch::TrafficSkeletonTile::Record> > { 
                struct Record {} *__first_; 
            } __end_cap_; 
        } m_records; 
    }  _trafficData;
    struct unique_ptr<md::TrafficStream, std::__1::default_delete<md::TrafficStream> > { 
        struct __compressed_pair<md::TrafficStream *, std::__1::default_delete<md::TrafficStream> > { 
            struct TrafficStream {} *__first_; 
        } __ptr_; 
    }  _trafficStream;
}

@property (nonatomic) const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*dataKey;
@property (nonatomic, readonly) VKTileKeyMap *dynamicTiles;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{PilledTrafficLayer=^^?{vector<md::PilledTrafficBatch *' */ struct *pilledTrafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> >=^^{BaseMesh}}}[1^{RenderState}]{shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >=^{ConstantDataTyped<ggl::Tile::View>}^{__shared_weak_count}}I^{TrafficSharedResources}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{SolidTrafficLayer=^^?{vector<md::SolidTrafficBatch *' */ struct *solidTrafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::TrafficBase::BaseMesh *> >=^^{BaseMesh}}}[2^{RenderState}]{shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >=^{ConstantDataTyped<ggl::Tile::View>}^{__shared_weak_count}}I^{TrafficSharedResources}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{FeatureAttributeSet={vector<gss::FeatureAttributePair' */ struct *styleAttributes; /* unknown property attribute:  std::__1::allocator<gss::FeatureAttributePair> >=^{FeatureAttributePair}}}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TrafficStream=IIIf{unique_ptr<ggl::Texture2D' */ struct *trafficStream; /* unknown property attribute:  true> >=f}}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_buildStartOffset:(float*)arg1 endOffset:(float*)arg2 forLine:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned int x_20_1_1; unsigned int x_20_1_2; } x20; BOOL x21; }*)arg3 forSkeleton:(const struct Record { unsigned int x1; unsigned int x2; float x3; float x4; long long x5; int x6; float x7; float x8; int x9; }*)arg4 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 forFlow:(const struct Flow { long long x1; float x2; float x3; int x4; }*)arg6 forPoints:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg7;
- (void)buildIncidentsForDynamic:(id)arg1 withRoadData:(id)arg2;
- (void)buildSkeletonMap;
- (void)buildTrafficIncidentsWithRoadData:(id)arg1;
- (void)buildTrafficMeshWithRoadData:(id)arg1 withLoader:(struct Loader { struct unique_ptr<ggl::LoaderImpl, std::__1::default_delete<ggl::LoaderImpl> > { struct __compressed_pair<ggl::LoaderImpl *, std::__1::default_delete<ggl::LoaderImpl> > { struct LoaderImpl {} *x_1_2_1; } x_1_1_1; } x1; }*)arg2 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg3;
- (void)buildTrafficStreamWithRoadData:(id)arg1 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg2;
- (void)buildTrafficWithRoadData:(id)arg1 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg2 addSegment:(id /* block */)arg3;
- (BOOL)builtRenderingData;
- (const struct TrafficMeshStyle { int x1[4]; }*)builtTrafficStyle;
- (const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)dataKey;
- (void)dealloc;
- (id)dynamicTiles;
- (void)enumerateTrafficRoadPiecesForTile:(id)arg1 usingFunction:(const struct function<void (const md::RoadPiece &)>={type=[12C] {}*)arg2;
- (id)incidents;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 data:(id)arg3 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(float)arg6 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg7;
- (struct PilledTrafficLayer { int (**x1)(); struct vector<md::PilledTrafficBatch *, std::__1::allocator<md::PilledTrafficBatch *> > { struct PilledTrafficBatch {} **x_2_1_1; struct PilledTrafficBatch {} **x_2_1_2; struct __compressed_pair<md::PilledTrafficBatch **, std::__1::allocator<md::PilledTrafficBatch *> > { struct PilledTrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::OptimizedTraffic::BaseMesh *, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::OptimizedTraffic::BaseMesh **, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[1]; struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; unsigned int x6; struct TrafficSharedResources {} *x7; }*)pilledTrafficLayer;
- (void)setDataKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setupStyleAttributesWithRoadData:(id)arg1;
- (struct SolidTrafficLayer { int (**x1)(); struct vector<md::SolidTrafficBatch *, std::__1::allocator<md::SolidTrafficBatch *> > { struct SolidTrafficBatch {} **x_2_1_1; struct SolidTrafficBatch {} **x_2_1_2; struct __compressed_pair<md::SolidTrafficBatch **, std::__1::allocator<md::SolidTrafficBatch *> > { struct SolidTrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::TrafficBase::BaseMesh *, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::TrafficBase::BaseMesh **, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[2]; struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; unsigned int x6; struct TrafficSharedResources {} *x7; }*)solidTrafficLayer;
- (struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_1_1_1; struct FeatureAttributePair {} *x_1_1_2; struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_3_2_1; } x_1_1_3; } x1; }*)styleAttributes;
- (const struct TrafficStream { unsigned int x1; unsigned int x2; unsigned int x3; float x4; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_5_1_1; } x5; float x6; struct TexelRun { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; float x_7_1_5; } x7; struct unordered_map<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun, md::TrafficStream::SectionKeyHash, std::__1::equal_to<md::TrafficStream::SectionKey>, std::__1::allocator<std::__1::pair<const md::TrafficStream::SectionKey, md::TrafficStream::TexelRun> > > { struct __hash_table<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, std::__1::__unordered_map_hasher<md::TrafficStream::SectionKey, std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, md::TrafficStream::SectionKeyHash, true>, std::__1::__unordered_map_equal<md::TrafficStream::SectionKey, std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, std::__1::equal_to<md::TrafficStream::SectionKey>, true>, std::__1::allocator<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; }*)trafficStream;

@end
