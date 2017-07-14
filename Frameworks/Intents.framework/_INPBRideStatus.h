/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideStatus : PBCodable <NSCopying> {
    NSMutableArray * _additionalActionItems;
    _INPBRideCompletionStatus * _completionStatus;
    _INPBRideDriver * _driver;
    _INPBLocationValue * _dropOffLocation;
    _INPBTimestamp * _estimatedDropOffDate;
    _INPBTimestamp * _estimatedPickupDate;
    _INPBTimestamp * _estimatedPickupEndDate;
    struct { 
        unsigned int phase : 1; 
    }  _has;
    int  _phase;
    _INPBLocationValue * _pickupLocation;
    NSString * _rideIdentifier;
    _INPBRideOption * _rideOption;
    _INPBDateTimeRangeValue * _scheduledPickupTime;
    PBUnknownFields * _unknownFields;
    _INPBUserActivity * _userActivityForCancelingInApplication;
    _INPBRideVehicle * _vehicle;
    NSMutableArray * _waypoints;
}

@property (nonatomic, retain) NSMutableArray *additionalActionItems;
@property (nonatomic, retain) _INPBRideCompletionStatus *completionStatus;
@property (nonatomic, retain) _INPBRideDriver *driver;
@property (nonatomic, retain) _INPBLocationValue *dropOffLocation;
@property (nonatomic, retain) _INPBTimestamp *estimatedDropOffDate;
@property (nonatomic, retain) _INPBTimestamp *estimatedPickupDate;
@property (nonatomic, retain) _INPBTimestamp *estimatedPickupEndDate;
@property (nonatomic, readonly) BOOL hasCompletionStatus;
@property (nonatomic, readonly) BOOL hasDriver;
@property (nonatomic, readonly) BOOL hasDropOffLocation;
@property (nonatomic, readonly) BOOL hasEstimatedDropOffDate;
@property (nonatomic, readonly) BOOL hasEstimatedPickupDate;
@property (nonatomic, readonly) BOOL hasEstimatedPickupEndDate;
@property (nonatomic) BOOL hasPhase;
@property (nonatomic, readonly) BOOL hasPickupLocation;
@property (nonatomic, readonly) BOOL hasRideIdentifier;
@property (nonatomic, readonly) BOOL hasRideOption;
@property (nonatomic, readonly) BOOL hasScheduledPickupTime;
@property (nonatomic, readonly) BOOL hasUserActivityForCancelingInApplication;
@property (nonatomic, readonly) BOOL hasVehicle;
@property (nonatomic) int phase;
@property (nonatomic, retain) _INPBLocationValue *pickupLocation;
@property (nonatomic, retain) NSString *rideIdentifier;
@property (nonatomic, retain) _INPBRideOption *rideOption;
@property (nonatomic, retain) _INPBDateTimeRangeValue *scheduledPickupTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBUserActivity *userActivityForCancelingInApplication;
@property (nonatomic, retain) _INPBRideVehicle *vehicle;
@property (nonatomic, retain) NSMutableArray *waypoints;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (Class)additionalActionItemsType;
+ (id)options;
+ (Class)waypointsType;

- (void).cxx_destruct;
- (int)StringAsPhase:(id)arg1;
- (void)addAdditionalActionItems:(id)arg1;
- (void)addWaypoints:(id)arg1;
- (id)additionalActionItems;
- (id)additionalActionItemsAtIndex:(unsigned int)arg1;
- (unsigned int)additionalActionItemsCount;
- (void)clearAdditionalActionItems;
- (void)clearWaypoints;
- (id)completionStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)driver;
- (id)dropOffLocation;
- (id)estimatedDropOffDate;
- (id)estimatedPickupDate;
- (id)estimatedPickupEndDate;
- (BOOL)hasCompletionStatus;
- (BOOL)hasDriver;
- (BOOL)hasDropOffLocation;
- (BOOL)hasEstimatedDropOffDate;
- (BOOL)hasEstimatedPickupDate;
- (BOOL)hasEstimatedPickupEndDate;
- (BOOL)hasPhase;
- (BOOL)hasPickupLocation;
- (BOOL)hasRideIdentifier;
- (BOOL)hasRideOption;
- (BOOL)hasScheduledPickupTime;
- (BOOL)hasUserActivityForCancelingInApplication;
- (BOOL)hasVehicle;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)phase;
- (id)phaseAsString:(int)arg1;
- (id)pickupLocation;
- (BOOL)readFrom:(id)arg1;
- (id)rideIdentifier;
- (id)rideOption;
- (id)scheduledPickupTime;
- (void)setAdditionalActionItems:(id)arg1;
- (void)setCompletionStatus:(id)arg1;
- (void)setDriver:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setEstimatedDropOffDate:(id)arg1;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setEstimatedPickupEndDate:(id)arg1;
- (void)setHasPhase:(BOOL)arg1;
- (void)setPhase:(int)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideIdentifier:(id)arg1;
- (void)setRideOption:(id)arg1;
- (void)setScheduledPickupTime:(id)arg1;
- (void)setUserActivityForCancelingInApplication:(id)arg1;
- (void)setVehicle:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)unknownFields;
- (id)userActivityForCancelingInApplication;
- (id)vehicle;
- (id)waypoints;
- (id)waypointsAtIndex:(unsigned int)arg1;
- (unsigned int)waypointsCount;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
