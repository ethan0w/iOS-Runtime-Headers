/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTransitLineMapModel : VKVectorMapModel <VKBuildingFootprintMapModelDelegate> {
    struct ClearItem { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; bool x3; float x4; unsigned char x5; unsigned int x6; } * _clearItem;
    float  _contentScale;
    bool  _debugHighlightFeaturesOnly;
    struct shared_ptr<md::TransitItemMarker> { 
        struct TransitItemMarker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _debugHighlightedItem;
    bool  _debugPaintCounts;
    bool  _disableIntraLinkLineCrossings;
    VKTimedAnimation * _fadeOutAnimation;
    bool  _forceMeshCreation;
    bool  _forceStyleUpdate;
    float  _inflation;
    struct shared_ptr<md::TransitInterTileMediator> { 
        struct TransitInterTileMediator {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _interTileMediator;
    bool  _isPrimaryModel;
    bool  _isScreenInfoReady;
    BOOL  _isTransitioningToTransit;
    struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; } * _labelExternalObjectsModerator;
    NSMutableSet * _lastTilesInScene;
    unsigned char  _lineMergingDisabled;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
        struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _linesOnSelectedNodes;
    bool  _needDebugConsoleClear;
    struct unique_ptr<md::TransitNodeFeaturePool, std::__1::default_delete<md::TransitNodeFeaturePool> > { 
        struct __compressed_pair<md::TransitNodeFeaturePool *, std::__1::default_delete<md::TransitNodeFeaturePool> > { 
            struct TransitNodeFeaturePool {} *__first_; 
        } __ptr_; 
    }  _nodeFeaturePool;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
        struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _nodesOnSelectedLines;
    VKCamera * _previousCamera;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _renderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _renderState3D;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _renderStateStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _renderStateStencil3D;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _screenProjectionMatrix;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _screenSizeInPixels;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
        struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _selectedLineIDs;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
        struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _selectedNodeIDs;
    bool  _shouldSynchronizeWithLabels;
    int  _sourceTileZtoStencilOffset;
    int  _stencilRef;
    int  _styleZ;
    NSMutableSet * _tilesEnteringScene;
    NSMutableSet * _tilesLeavingScene;
    struct shared_ptr<md::TransitLineSharedResources> { 
        struct TransitLineSharedResources {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _transitLineSharedResources;
    unsigned char  _transitLines3DCommandBufferId;
    unsigned char  _transitLinesCommandBufferId;
    bool  _updateSelectionIDs;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{unordered_set<unsigned long long' */ struct *nodesOnSelectedLines; /* unknown property attribute:  std::__1::equal_to<unsigned long long> >=f}}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{unordered_set<unsigned long long' */ struct *selectedLines; /* unknown property attribute:  std::__1::equal_to<unsigned long long> >=f}}} */
@property (nonatomic, readonly) struct shared_ptr<const md::TransitLineSharedResources> { struct TransitLineSharedResources {} *x1; struct __shared_weak_count {} *x2; } transitLineSharedResources;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearLastTilesInScene;
- (void)_debugHighlightItemAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_debugLayoutWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (bool)_grabStateFromContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (struct shared_ptr<md::TransitItemMarker> { struct TransitItemMarker {} *x1; struct __shared_weak_count {} *x2; })_itemAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setDebugHighlight:(const struct shared_ptr<md::TransitItemMarker> { struct TransitItemMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)_updateDebugSettings;
- (void)_willStartDrawingTiles:(id)arg1;
- (void)_willStopDrawingTiles:(id)arg1;
- (void)appendTransitLineCommandsToBuffer:(/* Warning: unhandled struct encoding: '{CommandBuffer=^^?*C^{RenderQueue}^{ClearItem}{vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}^^{RenderItem}{__compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}^{BufferLoadItem}{__compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}}}{deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >={__split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}{__compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}}}I{__compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >=L}}{deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> >={__split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}^^{PendingQuery}^^{PendingQuery}{__compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}}}I{__compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> >=L}}@}' */ struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; }*)arg1 inContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (void)beginFadeOut:(id /* block */)arg1;
- (void)buildingFootprintMapModel:(id)arg1 didUpdateStencilRef:(int)arg2;
- (void)clearDelegates;
- (void)dealloc;
- (void)debugHighlightObjectAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)didBeginTransitionToTransit;
- (void)didEndTransitionToTransit;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; }*)arg3 supportedPassIds:(struct pair<md::CommandBufferId, md::CommandBufferId> { unsigned char x1; unsigned char x2; })arg4;
- (unsigned long long)mapLayerPosition;
- (unsigned int)minSelectedLineZoomForIDs:(const struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (const struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)nodesOnSelectedLines;
- (void)populateSelectedLineBounds:(id)arg1;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)reset;
- (const struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)selectedLines;
- (void)setContentScale:(float)arg1;
- (void)setSelectedLines:(const struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (void)stopFadeOut;
- (void)stylesheetDidChange;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (struct shared_ptr<const md::TransitLineSharedResources> { struct TransitLineSharedResources {} *x1; struct __shared_weak_count {} *x2; })transitLineSharedResources;
- (void)transitionTiles:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 animated:(BOOL)arg4;
- (void)willDeactivate;

@end
