/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarker : VKFeatureMarker <GEOTransitArtworkDataSource, MKCalloutSource> {
    struct shared_ptr<md::LabelMarker> { 
        struct LabelMarker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _labelMarker;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic, readonly) NSArray *dataIconImageKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailCalloutAccessoryView;
@property (nonatomic, readonly) BOOL hasRoutingIncidentBadge;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) NSArray *iconImageKeys;
@property (nonatomic, readonly) NSArray *imageKeys;
@property (nonatomic, retain) UIView *leftCalloutAccessoryView;
@property (nonatomic, readonly) NSArray *relatedSubTexts;
@property (nonatomic, readonly) NSArray *relatedTexts;
@property (nonatomic, retain) UIView *rightCalloutAccessoryView;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (nonatomic, readonly) NSArray *shields;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *transitSystems;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (id)markerWithLabelMarker:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })_bounds;
- (const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)actualLabelMarker;
- (unsigned long long)animationID;
- (unsigned long long)businessID;
- (struct CGPoint { float x1; float x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { float x1; float x2; })arg1 canvasScale:(float)arg2 snapToPixels:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calloutAnchorRect;
- (id)clusterContentBounds;
- (id)clusterFeatureAnnotations;
- (unsigned int)clusterFeatureCount;
- (struct { double x1; double x2; })coordinate;
- (unsigned int)countFeatureIDs;
- (id)dataIconImageKeys;
- (id)debugAnchorPointString;
- (unsigned int)elementCount;
- (id)featureAnnotation;
- (id)featureHandles;
- (const unsigned long long*)featureIDs;
- (id)featureTile;
- (int)featureType;
- (BOOL)hasBusinessID;
- (id)iconImageKeys;
- (id)iconNameAsNSString;
- (id)imageKeys;
- (id)incident;
- (id)initWithFeatureMarkerPtr:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)initWithLabelMarkerPtr:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (BOOL)isAlongSelectedTransitLine;
- (BOOL)isCluster;
- (BOOL)isClusterChild;
- (BOOL)isFlyoverTour;
- (BOOL)isLabelHitAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1 selectableLabelsOnly:(BOOL)arg2;
- (BOOL)isLeafCluster;
- (BOOL)isOnRoute;
- (BOOL)isOneWayArrow;
- (BOOL)isSelectable;
- (BOOL)isTextVisible;
- (BOOL)isTrafficIncident;
- (BOOL)isTransit;
- (BOOL)isTransitLine;
- (BOOL)isVisible;
- (id)mapRegion;
- (id)parentClusterLabelMarker;
- (id)relatedSubTexts;
- (id)relatedTexts;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenCollisionBounds;
- (struct CGPoint { float x1; float x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { float x1; float x2; })arg1 canvasScale:(float)arg2;
- (int)selectionType;
- (void)setLabelPressed:(BOOL)arg1;
- (id)shields;
- (BOOL)shouldActivateFeatureSelectionMode;
- (int)sortKey;
- (id)subtext;
- (id)text;
- (id)transitSystems;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_annotationTitle;
- (id)accessibilityText;
- (int)artworkSourceType;
- (int)artworkUseType;
- (id)detailCalloutAccessoryView;
- (BOOL)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)leftCalloutAccessoryView;
- (id)rightCalloutAccessoryView;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)shieldDataSource;
- (id)subtitle;
- (id)title;

@end
