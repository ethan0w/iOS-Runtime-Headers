/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {
    GEOPDABClientDatasetMetadata * _abClientMetadata;
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    GEOClientCapabilities * _clientCapabilities;
    struct GEOTimepoint { 
        double _time; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _clientTimepoint;
    GEOCommonOptions * _commonOptions;
    GEOLocation * _currentUserLocation;
    NSMutableArray * _destinationWaypointTypeds;
    NSData * _directionsResponseID;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int clientTimepoint : 1; 
        unsigned int previouslyRejectedRerouteSavings : 1; 
        unsigned int rerouteStatus : 1; 
        unsigned int includeBetterRouteSuggestion : 1; 
        unsigned int needServerLatency : 1; 
        unsigned int useClientTimepointAsNow : 1; 
        unsigned int useLiveTrafficAsFallback : 1; 
    }  _has;
    BOOL  _includeBetterRouteSuggestion;
    BOOL  _needServerLatency;
    unsigned int  _previouslyRejectedRerouteSavings;
    int  _rerouteStatus;
    GEORouteAttributes * _routeAttributes;
    NSMutableArray * _routes;
    NSMutableArray * _serviceTags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    NSData * _sessionState;
    GEOTFTrafficSnapshot * _trafficSnapshot;
    BOOL  _useClientTimepointAsNow;
    BOOL  _useLiveTrafficAsFallback;
}

@property (nonatomic, retain) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic, retain) GEOClientCapabilities *clientCapabilities;
@property (nonatomic) struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } clientTimepoint;
@property (nonatomic, retain) GEOCommonOptions *commonOptions;
@property (nonatomic, retain) GEOLocation *currentUserLocation;
@property (nonatomic, retain) NSMutableArray *destinationWaypointTypeds;
@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, readonly) BOOL hasAbClientMetadata;
@property (nonatomic, readonly) BOOL hasAdditionalEnabledMarkets;
@property (nonatomic, readonly) BOOL hasClientCapabilities;
@property (nonatomic) BOOL hasClientTimepoint;
@property (nonatomic, readonly) BOOL hasCommonOptions;
@property (nonatomic, readonly) BOOL hasCurrentUserLocation;
@property (nonatomic, readonly) BOOL hasDirectionsResponseID;
@property (nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property (nonatomic) BOOL hasNeedServerLatency;
@property (nonatomic) BOOL hasPreviouslyRejectedRerouteSavings;
@property (nonatomic) BOOL hasRerouteStatus;
@property (nonatomic, readonly) BOOL hasRouteAttributes;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic, readonly) BOOL hasSessionState;
@property (nonatomic, readonly) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseClientTimepointAsNow;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL includeBetterRouteSuggestion;
@property (nonatomic) BOOL needServerLatency;
@property (nonatomic) unsigned int previouslyRejectedRerouteSavings;
@property (nonatomic) int rerouteStatus;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic, retain) NSMutableArray *serviceTags;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic, retain) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL useClientTimepointAsNow;
@property (nonatomic) BOOL useLiveTrafficAsFallback;

+ (Class)destinationWaypointTypedType;
+ (Class)routeType;
+ (Class)serviceTagType;

- (int)StringAsRerouteStatus:(id)arg1;
- (id)abClientMetadata;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (id)additionalEnabledMarkets;
- (void)clearDestinationWaypointTypeds;
- (void)clearRoutes;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })clientTimepoint;
- (id)commonOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserLocation;
- (void)dealloc;
- (id)description;
- (id)destinationWaypointTypedAtIndex:(unsigned int)arg1;
- (id)destinationWaypointTypeds;
- (unsigned int)destinationWaypointTypedsCount;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (BOOL)hasAbClientMetadata;
- (BOOL)hasAdditionalEnabledMarkets;
- (BOOL)hasClientCapabilities;
- (BOOL)hasClientTimepoint;
- (BOOL)hasCommonOptions;
- (BOOL)hasCurrentUserLocation;
- (BOOL)hasDirectionsResponseID;
- (BOOL)hasIncludeBetterRouteSuggestion;
- (BOOL)hasNeedServerLatency;
- (BOOL)hasPreviouslyRejectedRerouteSavings;
- (BOOL)hasRerouteStatus;
- (BOOL)hasRouteAttributes;
- (BOOL)hasSessionID;
- (BOOL)hasSessionState;
- (BOOL)hasTrafficSnapshot;
- (BOOL)hasUseClientTimepointAsNow;
- (BOOL)hasUseLiveTrafficAsFallback;
- (unsigned int)hash;
- (BOOL)includeBetterRouteSuggestion;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)needServerLatency;
- (unsigned int)previouslyRejectedRerouteSavings;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (int)rerouteStatus;
- (id)rerouteStatusAsString:(int)arg1;
- (Class)responseClass;
- (id)routeAtIndex:(unsigned int)arg1;
- (id)routeAttributes;
- (id)routes;
- (unsigned int)routesCount;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (id)serviceTags;
- (unsigned int)serviceTagsCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)sessionState;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientTimepoint:(struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setCommonOptions:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDestinationWaypointTypeds:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setHasClientTimepoint:(BOOL)arg1;
- (void)setHasIncludeBetterRouteSuggestion:(BOOL)arg1;
- (void)setHasNeedServerLatency:(BOOL)arg1;
- (void)setHasPreviouslyRejectedRerouteSavings:(BOOL)arg1;
- (void)setHasRerouteStatus:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasUseClientTimepointAsNow:(BOOL)arg1;
- (void)setHasUseLiveTrafficAsFallback:(BOOL)arg1;
- (void)setIncludeBetterRouteSuggestion:(BOOL)arg1;
- (void)setNeedServerLatency:(BOOL)arg1;
- (void)setPreviouslyRejectedRerouteSavings:(unsigned int)arg1;
- (void)setRerouteStatus:(int)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionState:(id)arg1;
- (void)setTrafficSnapshot:(id)arg1;
- (void)setUseClientTimepointAsNow:(BOOL)arg1;
- (void)setUseLiveTrafficAsFallback:(BOOL)arg1;
- (id)trafficSnapshot;
- (BOOL)useClientTimepointAsNow;
- (BOOL)useLiveTrafficAsFallback;
- (void)writeTo:(id)arg1;

@end
