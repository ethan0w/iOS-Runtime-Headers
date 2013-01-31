/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKLineDrawStyle, VKLabelDrawStyle, VKIntObjectMap, VKStyle, NSString, VKVectorTile;

@interface VKRoadGroup : NSObject  {
    VKVectorTile *_tile;
    VKStyle *_style;
    const struct { } *_roadStyle;
    VKLineDrawStyle *_linetyle;
    VKLabelDrawStyle *_labelStyle;
    int _meshType;
    VKIntObjectMap *_roadMeshes;
    VKIntObjectMap *_capMeshes;
    int _highestZ;
    int _lowestZ;
    BOOL _frozen;
    VKLineDrawStyle *_lineStyle;
}

@property(readonly) VKVectorTile * tile;
@property(readonly) const struct { }* roadStyle;
@property(readonly) VKLineDrawStyle * lineStyle;
@property(readonly) VKLabelDrawStyle * labelStyle;
@property(readonly) NSString * styleName;
@property(readonly) int highestZ;
@property(readonly) int lowestZ;


- (int)lowestZ;
- (int)highestZ;
- (unsigned int)triangleCount;
- (id)capMeshAtZ:(int)arg1;
- (id)roadMeshAtZ:(int)arg1;
- (id)initWithStyle:(id)arg1 tile:(id)arg2 createMesh:(BOOL)arg3 ofType:(int)arg4;
- (id)labelStyle;
- (id)lineStyle;
- (const struct { }*)roadStyle;
- (void)freeze;
- (void)dealloc;
- (id)tile;
- (id)styleName;

@end
