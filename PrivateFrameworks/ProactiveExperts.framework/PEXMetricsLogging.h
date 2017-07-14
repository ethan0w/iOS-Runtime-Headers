/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXMetricsLogging : NSObject {
    PETGoalConversionEventTracker * _contactCacheConversion;
    PETDistributionEventTracker * _contactContactsTimer;
    PETGoalConversionEventTracker * _contactConversion;
    PETDistributionEventTracker * _contactDetailsFoundDistribution;
    PETGoalConversionEventTracker * _contactStoreConversionForNames;
    PETGoalConversionEventTracker * _contactStoreConversionForPeople;
    PETGoalConversionEventTracker * _contactSuggestionsConversionForNames;
    PETGoalConversionEventTracker * _contactSuggestionsConversionForPeople;
    PETDistributionEventTracker * _contactSuggestionsTimer;
    PETDistributionEventTracker * _contactTimer;
    PETDistributionEventTracker * _contactsFoundDistribution;
    PETGoalConversionEventTracker * _eventConversion;
    PETGoalConversionEventTracker * _eventPartialStoreCacheConversion;
    PETGoalConversionEventTracker * _eventStoreCacheConversion;
    PETGoalConversionEventTracker * _eventStoreConversion;
    PETScalarEventTracker * _eventTimeCounter;
    PETDistributionEventTracker * _eventTimer;
    PETScalarEventTracker * _frameworkErrors;
    PETGoalConversionEventTracker * _peopleSuggestionsConversion;
    PETDistributionEventTracker * _peopleTimer;
    PETScalarEventTracker * _servantTimeouts;
    PETGoalConversionEventTracker * _sharableConversion;
    PETDistributionEventTracker * _sharableTimer;
}

@property (nonatomic, retain) PETGoalConversionEventTracker *contactCacheConversion;
@property (nonatomic, retain) PETDistributionEventTracker *contactContactsTimer;
@property (nonatomic, retain) PETGoalConversionEventTracker *contactConversion;
@property (nonatomic, retain) PETDistributionEventTracker *contactDetailsFoundDistribution;
@property (nonatomic, retain) PETGoalConversionEventTracker *contactStoreConversionForNames;
@property (nonatomic, retain) PETGoalConversionEventTracker *contactStoreConversionForPeople;
@property (nonatomic, retain) PETGoalConversionEventTracker *contactSuggestionsConversionForNames;
@property (nonatomic, retain) PETGoalConversionEventTracker *contactSuggestionsConversionForPeople;
@property (nonatomic, retain) PETDistributionEventTracker *contactSuggestionsTimer;
@property (nonatomic, retain) PETDistributionEventTracker *contactTimer;
@property (nonatomic, retain) PETDistributionEventTracker *contactsFoundDistribution;
@property (nonatomic, retain) PETGoalConversionEventTracker *eventConversion;
@property (nonatomic, retain) PETGoalConversionEventTracker *eventPartialStoreCacheConversion;
@property (nonatomic, retain) PETGoalConversionEventTracker *eventStoreCacheConversion;
@property (nonatomic, retain) PETGoalConversionEventTracker *eventStoreConversion;
@property (nonatomic, retain) PETScalarEventTracker *eventTimeCounter;
@property (nonatomic, retain) PETDistributionEventTracker *eventTimer;
@property (nonatomic, retain) PETScalarEventTracker *frameworkErrors;
@property (nonatomic, retain) PETGoalConversionEventTracker *peopleSuggestionsConversion;
@property (nonatomic, retain) PETDistributionEventTracker *peopleTimer;
@property (nonatomic, retain) PETScalarEventTracker *servantTimeouts;
@property (nonatomic, retain) PETGoalConversionEventTracker *sharableConversion;
@property (nonatomic, retain) PETDistributionEventTracker *sharableTimer;

+ (void)contactStoreContactsRequestedForNames;
+ (void)contactStoreContactsRequestedForPeople;
+ (void)contactStoreContactsResolvedForNames;
+ (void)contactStoreContactsResolvedForPeople;
+ (void)contactsCacheRequested;
+ (void)contactsCacheResolved;
+ (void)contactsNamesRequestTime:(unsigned long long)arg1;
+ (void)contactsPeopleContactsRequestTime:(unsigned long long)arg1;
+ (void)contactsPeopleRequestTime:(unsigned long long)arg1;
+ (void)contactsPeopleSuggestionsRequestTime:(unsigned long long)arg1;
+ (void)contactsRequested;
+ (void)contactsResolved;
+ (id)counter:(id)arg1 withProperties:(id)arg2;
+ (void)eventRequestTime:(unsigned long long)arg1;
+ (void)eventStoreEventsRequested;
+ (void)eventStoreEventsResolved;
+ (void)eventsCacheRequested;
+ (void)eventsCacheResolved;
+ (void)eventsPartialCacheRequested;
+ (void)eventsPartialCacheResolved;
+ (void)eventsRequested;
+ (void)eventsRequestedForTimeOfInterest:(id)arg1;
+ (void)eventsResolved;
+ (void)frameworkErrors:(id)arg1;
+ (id)instance;
+ (void)peopleSuggestorContactsRequested;
+ (void)peopleSuggestorContactsResolved;
+ (void)peopleSuggestorRequestTime:(unsigned long long)arg1;
+ (void)servantTimeout:(id)arg1;
+ (void)sharableRequestTime:(unsigned long long)arg1;
+ (void)sharablesRequested;
+ (void)sharablesResolved;
+ (void)suggestionsContactsRequestedForNames;
+ (void)suggestionsContactsRequestedForPeople;
+ (void)suggestionsContactsResolvedForNames;
+ (void)suggestionsContactsResolvedForPeople;
+ (id)timerFor:(id)arg1 withProperties:(id)arg2;
+ (id)trackerForDistribution:(id)arg1 withProperties:(id)arg2;
+ (id)trackerForGoal:(id)arg1 withProperties:(id)arg2;
+ (void)updateDistributionsForContactsFound:(id)arg1 forFields:(id)arg2;

- (void).cxx_destruct;
- (id)contactCacheConversion;
- (id)contactContactsTimer;
- (id)contactConversion;
- (id)contactDetailsFoundDistribution;
- (id)contactStoreConversionForNames;
- (id)contactStoreConversionForPeople;
- (id)contactSuggestionsConversionForNames;
- (id)contactSuggestionsConversionForPeople;
- (id)contactSuggestionsTimer;
- (id)contactTimer;
- (id)contactsFoundDistribution;
- (id)eventConversion;
- (id)eventPartialStoreCacheConversion;
- (id)eventStoreCacheConversion;
- (id)eventStoreConversion;
- (id)eventTimeCounter;
- (id)eventTimer;
- (id)frameworkErrors;
- (id)init;
- (id)peopleSuggestionsConversion;
- (id)peopleTimer;
- (id)servantTimeouts;
- (void)setContactCacheConversion:(id)arg1;
- (void)setContactContactsTimer:(id)arg1;
- (void)setContactConversion:(id)arg1;
- (void)setContactDetailsFoundDistribution:(id)arg1;
- (void)setContactStoreConversionForNames:(id)arg1;
- (void)setContactStoreConversionForPeople:(id)arg1;
- (void)setContactSuggestionsConversionForNames:(id)arg1;
- (void)setContactSuggestionsConversionForPeople:(id)arg1;
- (void)setContactSuggestionsTimer:(id)arg1;
- (void)setContactTimer:(id)arg1;
- (void)setContactsFoundDistribution:(id)arg1;
- (void)setEventConversion:(id)arg1;
- (void)setEventPartialStoreCacheConversion:(id)arg1;
- (void)setEventStoreCacheConversion:(id)arg1;
- (void)setEventStoreConversion:(id)arg1;
- (void)setEventTimeCounter:(id)arg1;
- (void)setEventTimer:(id)arg1;
- (void)setFrameworkErrors:(id)arg1;
- (void)setPeopleSuggestionsConversion:(id)arg1;
- (void)setPeopleTimer:(id)arg1;
- (void)setServantTimeouts:(id)arg1;
- (void)setSharableConversion:(id)arg1;
- (void)setSharableTimer:(id)arg1;
- (id)sharableConversion;
- (id)sharableTimer;

@end
