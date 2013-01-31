/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable  {
    double _timestamp;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
}

@property(retain) NSString * bundleIdentifier;
@property(retain) GEOLatLng * source;
@property(retain) GEOLatLng * destination;
@property double timestamp;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)bundleIdentifier;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (id)destination;
- (void)setSource:(id)arg1;
- (id)source;
- (id)dictionaryRepresentation;
- (void)setBundleIdentifier:(id)arg1;

@end
