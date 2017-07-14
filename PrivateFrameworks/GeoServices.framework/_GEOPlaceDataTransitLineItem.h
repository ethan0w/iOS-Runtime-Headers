/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem> {
    <GEOTransitAttribution> * _attribution;
    <GEOEncyclopedicInfo> * _encyclopedicInfo;
    BOOL  _hasEncyclopedicInfo;
    <GEOTransitLine> * _line;
    GEOMapRegion * _mapRegion;
    <GEOMapItemTransitInfo> * _transitInfo;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, readonly) <GEOTransitAttribution> *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int departureTimeDisplayStyle;
@property (nonatomic, readonly) BOOL departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (nonatomic, readonly) BOOL hasEncyclopedicInfo;
@property (nonatomic, readonly) BOOL hasIncidentComponent;
@property (nonatomic, readonly) BOOL hasLineColorString;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) BOOL isIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) BOOL showVehicleNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;

- (id)artwork;
- (id)attribution;
- (void)dealloc;
- (unsigned int)departureTimeDisplayStyle;
- (BOOL)departuresAreVehicleSpecific;
- (id)encyclopedicInfo;
- (BOOL)hasEncyclopedicInfo;
- (BOOL)hasIncidentComponent;
- (BOOL)hasLineColorString;
- (id)incidents;
- (id)initWithMapItem:(id)arg1;
- (BOOL)isIncidentsTTLExpired;
- (id)labelItems;
- (id)lineColorString;
- (id)mapRegion;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (BOOL)showVehicleNumber;
- (id)system;

@end
