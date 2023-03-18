game_instance = 0x1A8             +           world + game_instance // TYPE=uintptr_t                                                                                
persistent_level = 0x38            +     // world + persistent_level // TYPE=uintptr_t                                                                                  
local_player_array = 0x40          +       // game_instance + local_player_array // TYPE=uintptr_t                                                                                   
local_player_controller = 0x38      +      // local_player + local_player_controller // TYPE=uintptr_t                                                                                
local_player_pawn = 0x440           +      // local_player_controller + local_player_pawn // TYPE=uintptr_t (=actor)                                                                            
control_rotation = 0x420            +    // local_player_controller + control_rotation // TYPE=Vector3                                                                          
camera_manager = 0x458              +    // local_player_controller + camera_manager // TYPE=uintptr_t                                                                         
camera_position = 0x1220;                 // camera_manager + camera_position // TYPE=Vector3
camera_rotation = 0x122C;             // camera_manager + camera_rotation // TYPE=Vector3
camera_fov = 0x1238;                // camera_manager + camera_fov // TYPE=float
actor_array = 0xA0                +    // persistent_level + actor_array // TYPE=uintptr_t                                                                    
paint = 0x694                      // persistent_level + actor_array + actor +paint
actor_count = 0xB8               +  // persistent_level + actor_count // TYPE=int                                                                    
unique_id = 0x38                   // actor + actor_id // TYPE=uintptr_t
mesh_component = 0x410           +  // actor + mesh_component // TYPE=uintptr_t                                                                        
last_render_time = 0x350            // mesh_component + last_render_time // TYPE=float
last_submit_time = 0x358            // mesh_component + last_submit_time // TYPE=float
bone_array = 0x558                 + // mesh_component + bone_array // TYPE=uintptr_t                                                                    
bone_count = 0x560                 + // actor + bone_count // TYPE=uintptr_t                                                                   
component_to_world = 0x250         + // mesh_component + component_to_world // TYPE=uintptr_t                                                                           
root_component = 0x210              +// actor + root_component // TYPE=uintptr_t                                                                    
root_position = 0x164              +  // root_component + root_position // TYPE=Vector3                                                                     
damage_handler = 0x968              + // actor/local_player_pawn + damage_handler // TYPE=uintptr_t                                                               
health = 0x1B0                     + // damage_handler + health // TYPE=float                                                             
dormant = 0x100                     // actor + dormant // TYPE=bool                                                             
player_state = 0x3D0               + // actor/local_player_pawn + player_state // TYPE=uintptr_t       
team_component = 0x580             + // player_state + team_component // TYPE=uintptr_t          
team_id = 0xF8                      // team_component + team_id // TYPE=int
