
/*
     File: APLEvent.h
 Abstract: A Core Data managed object class to represent an event containing geographical coordinates and a time stamp.
 An event has a to-many relationship to Tag which represents tags associated with the event.
  Version: 2.3
 

 
 */

@class APLTag;


@interface APLEvent : NSManagedObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSDate *creationDate;
@property (nonatomic) NSNumber *latitude;
@property (nonatomic) NSNumber *longitude;

@property (nonatomic) NSSet *tags;

@end


/*
 Core Data automatically generates these accessors at runtime.
 */
@interface APLEvent (CoreDataGeneratedAccessors)

- (void)addTagsObject:(APLTag *)value;
- (void)removeTagsObject:(APLTag *)value;
- (void)addTags:(NSSet *)value;
- (void)removeTags:(NSSet *)value;

@end

