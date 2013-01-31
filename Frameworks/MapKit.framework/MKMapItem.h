/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSNumber, NSArray, NSString, MKPlacemark, NSURL;

@interface MKMapItem : NSObject  {
    NSString *_businessID;
    NSString *_localSearchProviderID;
    NSString *_yelpID;
    NSArray *_attributions;
    BOOL isCurrentLocation;
    MKPlacemark *placemark;
    NSString *name;
    NSString *phoneNumber;
    NSURL *url;
    NSString *placeID;
    NSNumber *numberOfReviews;
    NSNumber *rating;
    NSNumber *numberOfRatings;
    NSString *extSessionGuid;
    NSArray *entryPoints;
}

@property(readonly) BOOL isBusiness;
@property(retain) NSString * businessID;
@property(retain) NSString * localSearchProviderID;
@property(retain) NSString * yelpID;
@property(retain) NSString * placeID;
@property(retain) NSArray * attributions;
@property(readonly) NSURL * problemURL;
@property(retain) NSNumber * numberOfReviews;
@property(retain) NSNumber * rating;
@property(retain) NSNumber * numberOfRatings;
@property(retain) NSString * extSessionGuid;
@property(retain) NSArray * entryPoints;
@property(retain) MKPlacemark * placemark;
@property BOOL isCurrentLocation;
@property(copy) NSString * name;
@property(copy) NSString * phoneNumber;
@property(retain) NSURL * url;
@property(copy) NSString * businessID;
@property(copy) NSString * localSearchProviderID;
@property(copy) NSString * yelpID;
@property(copy) NSString * placeID;
@property(copy) NSNumber * numberOfReviews;
@property(copy) NSNumber * rating;
@property(copy) NSNumber * numberOfRatings;
@property(copy) NSString * extSessionGuid;
@property(copy) NSArray * entryPoints;
@property(copy) NSArray * attributions;

+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (id)mapItemForCurrentLocation;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;

- (void)setAttributions:(id)arg1;
- (id)businessID;
- (id)attributions;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (void)setExtSessionGuid:(id)arg1;
- (id)extSessionGuid;
- (void)setPlaceID:(id)arg1;
- (id)placeID;
- (void)setBusinessID:(id)arg1;
- (void)setNumberOfReviews:(id)arg1;
- (id)numberOfReviews;
- (void)setNumberOfRatings:(id)arg1;
- (id)numberOfRatings;
- (id)entryPoints;
- (void)setLocalSearchProviderID:(id)arg1;
- (id)localSearchProviderID;
- (void)setEntryPoints:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)dictionaryRepresentation;
- (id)phoneNumber;
- (id)problemURL;
- (id)_queryStringForDictionary:(id)arg1;
- (BOOL)isCurrentLocation;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
- (BOOL)isBusiness;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setYelpID:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (id)yelpID;
- (id)placemark;
- (void)setRating:(id)arg1;
- (id)rating;
- (id)initWithPlacemark:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
